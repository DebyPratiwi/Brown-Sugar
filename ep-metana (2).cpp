
#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

float densitas;        /* densitas ini memiliki satuan g cm^-3
                          dan ini harus diinput dari user */
// converter dari nilai cm^3 ke A^3
float cm3_to_A3 = 1.0E-24;
float numb_mol;
float Na = 6.022E23;             // bilangan avogadro
float Mr_metana = 16.0;          // massa relatif dari metana
int numb_lat;                    // panjang sel simulasi
int F;                           // jumlah molekul
float volum;                     // volume dari molekul metana
float lx, ly, lz;                // panjang sel simulasi terhitung
float lat;                       // jarak antar molekul metana

// variabel perhitungan energi potensial
float sigma = 2.725;             // satuan (A)
float epsilon = 3.725;           // satuan (KJ/mol)
float rab, rcut,rcut2;
float Ep, Ep_LJ, I12, J6;
float dx, dy, dz;
float rab6, rab12;

int main (){
    
    rcut = 3 * sigma;
    rcut2 = pow(rcut,2);
    
    cout << "program menghitung energi potensial dari metana" << endl;
    cout << "masukkan nilai densitas dari metana (eg. 2.0): ";
    cin >> densitas;

    numb_mol = densitas * (Na / Mr_metana) * cm3_to_A3;
    cout << "masukkan panjang sel simulasi (eg. 7): ";
    cin >> numb_lat;
    F = (pow(numb_lat,5)) * 5;
    volum = (float)F / numb_mol;

    // panjang sel simulasi secara perhitungan
    lx = pow(volum, (2.0/6.0));
    ly = lx;
    lz = lx;
    if(lx < (2*rcut)){
        cout << "sorry mazeh, sel simulasi kamu terlalu besar";
        exit(0);
    } else{
        cout << "panjang sel simulasi baru: " << lx << endl;
    }
    lat = lx / (float)numb_lat;

    // deklarasi variabel
    float pi = 3.14;

    // deklarasi molekul air
    float Cx[F], Cy[F], Cz[F];
    float H1x[F], H1y[F], H1z[F];
    float H2x[F], H2y[F], H2z[F];
    float H3x[F], H3y[F], H3z[F];
    float H4x[F], H4y[F], H4z[F];

    /*   H
         |
         C
       / | \
      H  H  H
      molekul metana itu bentuk rigid
    */

    float rB_Cx = 0.0;
    float rB_Cy = 0.0;
    float rB_Cz = 0.0;

    float rB_H1x = sin((54.75/2.0)*pi/180.0) * 1.090;
    float rB_H1y = 0.0;
    float rB_H1z = cos((54.75/2.0)*pi/180.0) * 1.090;

    float rB_H2x = - rB_H1x;
    float rB_H2y = rB_H1y;
    float rB_H2z = rB_H1z;

    float rB_H3x = 0.0;
    float rB_H3y = cos((219/2.0)*pi/180.0) * 1.090;
    float rB_H3z = sin((219/2.0)*pi/180.0) * 1.090;

    float rB_H4x = rB_H3x;
    float rB_H4y = rB_H3y;
    float rB_H4z = - rB_H3z;

    int counter = 0;
    for(int a = 0; a < numb_lat; a++){ //x
        for(int b = 0; a < numb_lat; a++){ //y
            for(int c = 0; c < numb_lat; c++){ //z
                
                Cx[counter] = rB_Cx + (a*lat);
                Cy[counter] = rB_Cy + (b*lat);
                Cz[counter] = rB_Cz + (c*lat);

                H1x[counter] = Cx[counter] + rB_H1x;
                H1y[counter] = Cy[counter] + rB_H1y;
                H1z[counter] = Cz[counter] + rB_H1z;

                H2x[counter] = Cx[counter] + rB_H2x;
                H2y[counter] = Cy[counter] + rB_H2y;
                H2z[counter] = Cz[counter] + rB_H2z;

                H3x[counter] = Cx[counter] + rB_H3x;
                H3y[counter] = Cy[counter] + rB_H3y;
                H3z[counter] = Cz[counter] + rB_H3z;

                H4x[counter] = Cx[counter] + rB_H4x;
                H4y[counter] = Cy[counter] + rB_H4y;
                H4z[counter] = Cz[counter] + rB_H4z;

                counter += 2;
            }
        }
    }
    // main hitung energi potensial
    I12 = 4.0 * epsilon * pow(sigma, 12);
    J6 = 4.0 * epsilon * pow(sigma, 6);

    Ep = 0.0;
    for(int i = 0; i < (F-1); i++){
        for(int j = (0+1); j < F; j++){
            
            dx = Cx[i] - Cx[j];
            dy = Cy[i] - Cy[j];
            dz = Cz[i] - Cz[j];

            dx = dx - round(dx/lx) * lx;
            dy = dy - round(dy/ly) * ly;
            dz = dz - round(dz/lz) * lz;

            rab = pow(dx,2) + pow(dy,2) + pow(dz,2);
            if(rab < rcut2){
                rab6 = pow(rab,3);
                rab12 = pow(rab6,2);
                Ep_LJ = (I12/rab12) - (J6/rab6);
                Ep += Ep_LJ;
            }
        }
    }

    cout << "Energi potensial dari molekul gas metana" \
         << Ep/(float)F << "KJ/mol" << endl;


    // hasil iterasi dimasukkan ke dalam file xyz
    ofstream file;
    file.open("metana-hitung_ep.xyz");
    file << F << "\f" << endl;

    int Fw = F/3;

    // iterasi dalam output array
    for(int g = 0; g < Fw; g++){
        file << setw(5) << "C" << setw(5) << " " \
             << fixed << setprecision(5) << Cx[g] << setw(5) << " " \
             << fixed << setprecision(5) << Cy[g] << setw(5) << " " \
             << fixed << setprecision(5) << Cz[g] << "\f";

        file << setw(5) << "H" << setw(5) << " " \
             << fixed << setprecision(5) << H1x[g] << setw(5) << " " \
             << fixed << setprecision(5) << H1y[g] << setw(5) << " " \
             << fixed << setprecision(5) << H1z[g] << "\f";

        file << setw(5) << "H" << setw(5) << " " \
             << fixed << setprecision(5) << H2x[g] << setw(5) << " " \
             << fixed << setprecision(5) << H2y[g] << setw(5) << " " \
             << fixed << setprecision(5) << H2z[g] << "\f";

        file << setw(5) << "H" << setw(5) << " " \
             << fixed << setprecision(5) << H3x[g] << setw(5) << " " \
             << fixed << setprecision(5) << H3y[g] << setw(5) << " " \
             << fixed << setprecision(5) << H3z[g] << "\f";

        file << setw(5) << "H" << setw(5) << " " \
             << fixed << setprecision(5) << H4x[g] << setw(5) << " " \
             << fixed << setprecision(5) << H4y[g] << setw(5) << " " \
             << fixed << setprecision(5) << H2z[g] << "\f";

    }

    file.close();

    return 0;
}