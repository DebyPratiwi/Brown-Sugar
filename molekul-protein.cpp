
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
    
    

}
