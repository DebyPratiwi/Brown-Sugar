
#iclude "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

int main (){
    // deklarasi variabel 
    float pi = 3.14;

    //deklarasi molekul protein  
    float C1x, C1y, C1z;
    float C2x, C2y, C2z;
    float H1x, H1y, H1z;
    float H2x, H2y, H2z;
    float H3x, H3y, H3z;
    float H4x, H4y, H4z;
    float Nx, Ny, Nz;
    float O1x, O1y, O1z;
    float O2x, O2y, O2z;

    /*          Coo-
                 |
          H3N+ - C - H 
                 |
                 R 
          molekul protein itu bentuk rigid 
        */
        
        float rB_C1x = 0.0;
        float rB_C1y = 0.0;
        float rB_C1z = 0.0;
        
        float rB_C2x = sin(( masukan nilai/2.0)*pi/180.0) * 1.090;
        float rB_C2y = 0.0;
        float rB_C3z = cos((masukan nilai /2.0)*pi/180.0) * 1.090;
    
        float rB_H1x = sin(( masukan nilai/2.0)*pi/180.0) * 1.090;
        float rB_H1y = 0.0
        float rB_H1z = cos((masukan nilai /2.0)*pi/180.0) * 1.090;
    
        float rB_H2x = - rB_H1x;
        float rB_H2y = rB_H1y;
        float rB_H2z = rB_H1z;
    
        float rB_H3x = 0.0;
        float rB_H3y = cos((masukan nilai/2.0)*pi/180.0) * 1.090;
        float rB_H3z = sin(( masukan nilai/2.0)*pi/180.0) * 1.090;
    
        float rB_H4x = rB_H3x;
        float rB_H4y = rB_H3y;
        float rB_H4z = - rB_H3z;
    
        float rB_Nx = 0.0;
        float rB_Ny = 0.0;
        float rB_Nz = 0.0; 
    
        float rB_O1x = 0.0;
        float rB_O1y = 0.0;
        float rB_O1z = 0.0;
        
        float rB_O2x = sin(( masukan nilai/2.0)*pi/180.0) * 1.090;
        float rB_O2y = 0.0;
        float rB_O3z = cos((masukan nilai /2.0)*pi/180.0) * 1.090;
    
    // iterasi untuk setiap molekul protein
    for(int a = 1; a = < 10; a++){
        for(int b = 1; b = < 10; b++){
            for(int c = 1; c = < 10; c++){
                
                C1x[counter] = rB_C1x + (a*3.01);
                C1y[counter] = rB_C1y + (b*3.01);
                C1z[counter] = rB_C1z + (c*3.01);
                
                C2x[counter] = C1x[counter] + rB_C2x;
                C2y[counter] = C1y[counter] + rB_C2y;
                C2z[counter] = C1z[counter] + rB_C2z;
                
                H1x[counter] = C1x[counter] + rB_H1x;
                H1y[counter] = C1y[counter] + rB_H1y;
                H1z[counter] = C1z[counter] + rB_H1z;
                
                H2x[counter] = C1x[counter] + rB_H2x;
                H2y[counter] = C1y[counter] + rB_H2y;
                H2z[counter] = C1z[counter] + rB_H2z;
                
                H3x[counter] = C1x[counter] + rB_H3x;
                H3y[counter] = C1y[counter] + rB_H3y;
                H3z[counter] = C1z[counter] + rB_H3z;
                
                H4x[counter] = C1x[counter] + rB_H4x;
                H4y[counter] = C1y[counter] + rB_H4y;
                H4z[counter] = C1z[counter] + rB_H4z;
                
                H5x[counter] = C1x[counter] + rB_H5x;
                H5x[counter] = C1x[counter] + rB_H5x;
                H5x[counter] = C1x[counter] + rB_H5x;
                
                H6x[counter] = C1x[counter] + rB_H6x;
                H6x[counter] = C1x[counter] + rB_H6x;
                H6x[counter] = C1x[counter] + rB_H6x;
                
                H7x[counter] = C1x[counter] + rB_H7x;
                H7x[counter] = C1x[counter] + rB_H7x;
                H7x[counter] = C1z[counter] + rB_H7x;
                
                H8x[counter] = C1x[counter] + rB_H8x;
                H8y[counter] = C1y[counter] + rB_H8y;
                H8z[counter] = C1z[counter] + rB_H8z;
                
                H9x[counter] = C1x[counter] + rB_H9x;
                H9y[counter] = C1y[counter] + rB_H9y;
                H9z[counter] = C1z[counter] + rB_H9z;
                
                H10x[counter] = C1x[counter] + rB_H10x;
                H10y[counter] = C1y[counter] + rB_H10y;
                H10z[counter] = C1z[counter] + rB_H10z;
                
                H11x[counter] = C1x[counter] + rB_H11x;
                H11y[counter] = C1y[counter] + rB_H11y;
                H11z[counter] = C1z[counter] + rB_H11z;
                
                H12x[counter] 
                
           
                
                




                
                
                Nx[counter] = C1x[counter] + rB_Nx;
                Ny[counter] = C1y[counter] + rB_Ny;
                Nz[counter] = C1z[counter] + rB_Nz;
                
                O1x[counter] = C1x[counter] + rB_O1x;
                O1y[counter] = C1y[counter] + rB_O1y;
                O1z[counter] = C1z[counter] + rB_O1z;
                
                O2x[counter] = C1x[counter] + rB_O2x;
                O2y[counter] = C1y[counter] + rB_O2y;
                O2z[counter] = C1z[counter] + rB_O2z;
                
                O3x[counter] = C1x[counter] + rB_O3x;
                O3y[counter] = C1y[counter] + rB_O3y;
                O3z[counter] = C1z[counter] + rB_O3z;
                
                O4x[counter] = C1x[counter] + rB_O4x;
                O4y[counter] = C1y[counter] + rB_O4y;
                O4z[counter] = C1z[counter] + rB_O4z;
                
                O5x[counter] = C1x[counter] + rB_O5x;
                O5y[counter] = C1y[counter] + rB_O5y;
                O5z[counter] = C1z[counter] + rB_O5z;
                
                O6x[counter] = C1x[counter] + rB_O6x;
                O6y[counter] = C1y[counter] + rB_O6y;
                O6z[counter] = C1z[counter] + rB_O6z;
                
                O7x[counter] = C1x[counter] + rB_O7x;
                O7y[counter] = C1y[counter] + rB_O7y;
                O7z[counter] = C1z[counter] + rB_O7z;
                
                O8x[counter] = C1x[counter] + rB_O8x;
                O8y[counter] = C1y[counter] + rB_O8y;
                O8z[counter] = C1z[counter] + rB_O8z;
                
                O9x[counter] = C1x[counter] + rB_O9x;
                O9y[counter] = C1y[counter] + rB_O9y;
                O9z[counter] = C1z[counter] + rB_O9z;
                
                O10x[counter] = C1x[counter] + rB_O10x;
                O10y[counter] = C1y[counter] + rB_O10y;
                O10z[counter] = C1z[counter] + rB_O10z;
                
                O11x[counter] = C11x[counter] + rB_O11x;
                O11y[counter] = C11y[counter] + rB_O11y;
                O11z[counter] = C11z[counter] + rB_O11x;
                
                O12x[counter] = C12x[counter] + rB_O12x;
                O12y[counter] = C12y[counter] + rB_O12y;
                O12z[counter] = C12z[counter] + rB_O12z;
                
                O13x[counter] = C13x[counter] + rB_O13x;
                O13y[counter] = C13y[counter] + rB_O13y;
                O13z[counter] = C13z[counter] + rB_O13z;
                
                O14x[counter] = C14x[counter] + rB_O14x;
                O14y[counter] = C14y[counter] + rB_O14y;
                O14z[counter] = C14z[counter] + rB_O14z;
                
                O15x[counter] = C15[counter] + rB_O15x;
                O15y[counter] = C15[counter] + rB_O15y; 
                O15z[counter] = C15[counter] + rB_O15z;
                
                O16x[counter] = C16x[counter] + rB_O16x;
                O16y[counter] = C16y[counter] + rB_O16y;
                O16z[counter] = C16z[counter] + rB_O16z;
                
                

}
                
