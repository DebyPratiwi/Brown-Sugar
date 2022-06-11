
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
    float N1x, N1y, N1z;
    float N2x, H2y, N2z;
    float O1x, O1y, O1z;
    float O2x, O2y, O2z;

    /*          Coo-
                 |
          H3N+ - C - H 
                 |
            C34H57N6O17 
          molekul protein itu bentuk rigid 
        */
        
        float rB_C1x = 0.0;
        float rB_C1y = 0.0;
        float rB_C1z = 0.0;
        
        float rB_C2x = sin((1,54/2.0)*pi/180.0) * 1.090;
        float rB_C2y = 0.0;
        float rB_C3z = cos((1,54/2.0)*pi/180.0) * 1.090;
    
        float rB_H1x = sin((1,095/2.0)*pi/180.0) * 1.090;
        float rB_H1y = 0.0
        float rB_H1z = cos((1,095/2.0)*pi/180.0) * 1.090;
    
        float rB_H2x = - rB_H1x;
        float rB_H2y = rB_H1y;
        float rB_H2z = rB_H1z;
    
        float rB_N1x = 0.0;
        float rB_N1y = cos((1,47/2.0)*pi/180.0) * 1.090;
        float rB_N1z = sin((1,47/2.0)*pi/180.0) * 1.090;
    
        float rB_N2x = rB_N1x;
        float rB_N2y = rB_N1y;
        float rB_N2z = - rB_N1z; 
    
        float rB_O1x = 0.0;
        float rB_O1y = 0.0;
        float rB_O1z = 0.0;
        
        float rB_O2x = sin((1,34/2.0)*pi/180.0) * 1.090;
        float rB_O2y = 0.0;
        float rB_O3z = cos((1,34/2.0)*pi/180.0) * 1.090;
    
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
                
                C3x[counter] = C1x[counter] + rB_C3x;
                C3y[counter] = C1y[counter] + rB_C3y;
                C3z[counter] = C1z[counter] + rB_C3z;
                
                C4x[counter] = C1x[counter] + rB_C4x;
                C4y[counter] = C1y[counter] + rB_C4y;
                C4z[counter] = C1z[counter] + rB_C4z;
                
                C5x[counter] = C1x[counter] + rB_C5x;
                C5y[counter] = C1y[counter] + rB_C5y;
                C5z[counter] = C1z[counter] + rB_C5z;
                
                C6x[counter] = C1x[counter] + rB_C6x;
                C6y[counter] = C1y[counter] + rB_C6y;
                C6z[counter] = C1z[counter] + rB_C6z;
                
                C7x[counter] = C1x[counter] + rB_C7x;
                C7y[counter] = C1y[counter] + rB_C7y;
                C7z[counter] = C1z[counter] + rB_C7z;
                
                C8x[counter] = C1x[counter] + rB_C8x;
                C8y[counter] = C1y[counter] + rB_C8y;
                C8z[counter] = C1z[counter] + rB_C8z;
                
                C9x[counter] = C1x[counter] + rB_C9x;
                C9y[counter] = C1y[counter] + rB_C9y;
                C9z[counter] = C1z[counter] + rB_C9z;
                
                C10x[counter] = C1x[counter] + rB_C10x;
                C10y[counter] = C1y[counter] + rB_C10y;
                C10z[counter] = C1z[counter] + rB_C10z;
                
                C11x[counter] = C1x[counter] + rB_C11x;
                C11y[counter] = C1y[counter] + rB_C11y;
                C11z[counter] = C1z[counter] + rB_C11z;
                
                C12x[counter] = C1x[counter] + rB_C12x;
                C12y[counter] = C1y[counter] + rB_C12y;
                C12z[counter] = C1z[counter] + rB_C12z;
                
                C13x[counter] = C1x[counter] + rB_C13x;
                C13y[counter] = C1y[counter] + rB_C13y;
                C13z[counter] = C1z[counter] + rB_C13z;
                
                C14x[counter] = C1x[counter] + rB_C14x;
                C14y[counter] = C1y[counter] + rB_C14y;
                C14z[counter] = C1z[counter] + rB_C14z;
                
                C15x[counter] = C1x[counter] + rB_C15x;
                C15y[counter] = C1y[counter] + rB_C15y;
                C15z[counter] = C1z[counter] + rB_C15z;
                
                C16x[counter] = C1x[counter] + rB_C16x;
                C16y[counter] = C1y[counter] + rB_C16y;
                C16z[counter] = C1z[counter] + rB_C16z;
                
                C17x[counter] = C1x[counter] + rB_C17x;
                C17y[counter] = C1y[counter] + rB_C17y;
                C17z[counter] = C1z[counter] + rB_C17z;
                
                C18x[counter] = C1x[counter] + rB_C18x;
                C18y[counter] = C1y[counter] + rB_C18y;
                C18z[counter] = C1z[counter] + rB_C18z;
                
                C19x[counter] = C1x[counter] + rB_C19x;
                C19y[counter] = C1y[counter] + rB_C19y;
                C19z[counter] = C1z[counter] + rB_C019z;
                
                C20x[counter] = C1x[counter] + rB_C20x;
                C20y[counter] = C1y[counter] + rB_C20y;
                C20z[counter] = C1z[counter] + rB_C20z;
                
                C21x[counter] = C1x[counter] + rB_C21x;
                C21y[counter] = C1y[counter] + rB_C21y;
                C21z[counter] = C1z[counter] + rB_C21z;
                
                C22x[counter] = C1x[counter] + rB_C22x;
                C22y[counter] = C1y[counter] + rB_C22y;
                C22z[counter] = C1z[counter] + rB_C22z;
                
                C23x[counter] = C1x[counter] + rB_C23x;
                C23y[counter] = C1y[counter] + rB_C23y;
                C23z[counter] = C1z[counter] + rB_C23z;
                
                C24x[counter] = C1x[counter] + rB_C24x;
                C24y[counter] = C1y[counter] + rB_C24y;
                C24z[counter] = C1z[counter] + rB_C24z;
                
                C25x[counter] = C1x[counter] + rB_C25x;
                C25y[counter] = C1y[counter] + rB_C25y;
                C25z[counter] = C1z[counter] + rB_C25z;
                
                C26x[counter] = C1x[counter] + rB_C26x;
                C26y[counter] = C1y[counter] + rB_C26y;
                C26z[counter] = C1z[counter] + rB_C26z;
                
                C27x[counter] = C1x[counter] + rB_C27x;
                C27y[counter] = C1y[counter] + rB_C27y;
                C27z[counter] = C1z[counter] + rB_C27z;
                
                C28x[counter] = C1x[counter] + rB_C28x;
                C28y[counter] = C1y[counter] + rB_C28y;
                C28z[counter] = C1z[counter] + rB_C28z;
                
                C29x[counter] = C1x[counter] + rB_C29x;
                C29y[counter] = C1y[counter] + rB_C29y;
                C29z[counter] = C1z[counter] + rB_C29z;
                
                C30x[counter] = C1x[counter] + rB_C30x;
                C30y[counter] = C1y[counter] + rB_C30y;
                C30z[counter] = C1z[counter] + rB_C30z;
                
                C31x[counter] = C1x[counter] + rB_C31x;
                C31y[counter] = C1y[counter] + rB_C31y;
                C31z[counter] = C1z[counter] + rB_C31z;
                
                C32x[counter] = C1x[counter] + rB_C32x;
                C32y[counter] = C1y[counter] + rB_C32y;
                C32z[counter] = C1z[counter] + rB_C32z;
                
                C33x[counter] = C1x[counter] + rB_C33x;
                C33y[counter] = C1y[counter] + rB_C33y;
                C33z[counter] = C1z[counter] + rB_C33z;
                
                C34x[counter] = C1x[counter] + rB_C34x;
                C34y[counter] = C1y[counter] + rB_C34y;
                C34z[counter] = C1z[counter] + rB_C34z;
                
                C35x[counter] = C1x[counter] + rB_C35x;
                C35y[counter] = C1y[counter] + rB_C35y;
                C35z[counter] = C1z[counter] + rB_C35z;
                
                C36x[counter] = C1x[counter] + rB_C36x;
                C36y[counter] = C1y[counter] + rB_C36y;
                C36z[counter] = C1z[counter] + rB_C36z;
                
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
                H5y[counter] = C1y[counter] + rB_H5y;
                H5z[counter] = C1z[counter] + rB_H5z;
                
                H6x[counter] = C1x[counter] + rB_H6x;
                H6y[counter] = C1y[counter] + rB_H6y;
                H6z[counter] = C1z[counter] + rB_H6z;
                
                H7x[counter] = C1x[counter] + rB_H7x;
                H7y[counter] = C1y[counter] + rB_H7y;
                H7z[counter] = C1z[counter] + rB_H7z;
                
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
                
                H12x[counter] = C1x[counter] + rB_H12x;
                H12y[counter] = C1y[counter] + rB_H12y;
                H12z[counter] = C1z[counter] + rB_H12z;
                
                H13x[counter] = C1x[counter] + rB_H13x;
                H13y[counter] = C1y[counter] + rB_H13y;
                H13z[counter] = C1z[counter] + rB_H13z;
                
                H14x[counter] = C1x[counter] + rB_H14x;
                H14y[counter] = C1y[counter] + rB_H14y;
                H14z[counter] = C1z[counter] + rB_H14z;
                
                H15x[counter] = C1x[counter] + rB_H15x;
                H15y[counter] = C1y[counter] + rB_H15y;
                H15z[counter] = C1z[counter] + rB_H15z;
                
                H16x[counter] = C1x[counter] + rB_H16x;
                H16y[counter] = C1y[counter] + rB_H16y;
                H16z[counter] = C1z[counter] + rB_H16z;
                
                H17x[counter] = C1x[counter] + rB_H17x;
                H17y[counter] = C1y[counter] + rB_H17y;
                H17z[counter] = C1z[counter] + rB_H17z;
                
                H18x[counter] = C1x[counter] + rB_H18x;
                H18y[counter] = C1y[counter] + rB_H18y;
                H18z[counter] = C1z[counter] + rB_H18z;
                
                H19x[counter] = C1x[counter] + rB_H19x;
                H19y[counter] = C1y[counter] + rB_H19y;
                H19z[counter] = C1z[counter] + rB_H19z;
                
                H20x[counter] = C1x[counter] + rB_H20x;
                H20y[counter] = C1y[counter] + rB_H20y;
                H20z[counter] = C1z[counter] + rB_H20z;
                
                H21x[counter] = C1x[counter] + rB_H21x;
                H21y[counter] = C1y[counter] + rB_H21y;
                H21z[counter] = C1z[counter] + rB_H21z;
                
                H22x[counter] = C1x[counter] + rB_H22x;
                H22y[counter] = C1y[counter] + rB_H22y;
                H22z[counter] = C1z[counter] + rB_H22z;
                
                H23x[counter] = C1x[counter] + rB_H23x;
                H23y[counter] = C1y[counter] + rB_H23y;
                H23z[counter] = C1z[counter] + rB_H23z;
                
                H24x[counter] = C1x[counter] + rB_H24x;
                H24y[counter] = C1y[counter] + rB_H24y;
                H24z[counter] = C1z[counter] + rB_H24z;
                
                H25x[counter] = C1x[counter] + rB_H25x;
                H25y[counter] = C1y[counter] + rB_H25y;
                H25z[counter] = C1z[counter] + rB_H25z;
                
                H26x[counter] = C1x[counter] + rB_H26x;
                H26y[counter] = C1y[counter] + rB_H26y;
                H26z[counter] = C1z[counter] + rB_H26z;
                
                H27x[counter] = C1x[counter] + rB_H27x;
                H27y[counter] = C1y[counter] + rB_H27y;
                H27z[counter] = C1z[counter] + rB_H27z;
                
                H28x[counter] = C1x[counter] + rB_H28x;
                H28y[counter] = C1y[counter] + rB_H28y;
                H28z[counter] = C1z[counter] + rB_H28z;
                
                H29x[counter] = C1x[counter] + rB_H29x;
                H29y[counter] = C1y[counter] + rB_H29y;
                H29z[counter] = C1z[counter] + rB_H29z;
                
                H30x[counter] = C1x[counter] + rB_H30x;
                H30y[counter] = C1y[counter] + rB_H30y;
                H30z[counter] = C1z[counter] + rB_H30z;
                
                H31x[counter] = C1x[counter] + rB_H31x;
                H31y[counter] = C1y[counter] + rB_H31y;
                H31z[counter] = C1z[counter] + rB_H31z;
                
                H32x[counter] = C1x[counter] + rB_H32x;
                H32y[counter] = C1y[counter] + rB_H32y;
                H32z[counter] = C1z[counter] + rB_H32z;
                
                H33x[counter] = C1x[counter] + rB_H33x;
                H33y[counter] = C1y[counter] + rB_H33y;
                H33z[counter] = C1z[counter] + rB_H33z;
                
                H34x[counter] = C1x[counter] + rB_H34x;
                H34y[counter] = C1y[counter] + rB_H34y;
                H34z[counter] = C1z[counter] + rB_H34z;
                
                H35x[counter] = C1x[counter] + rB_H35x;
                H35y[counter] = C1y[counter] + rB_H35y;
                H35z[counter] = C1z[counter] + rB_H35z;
                
                H36x[counter] = C1x[counter] + rB_H36x;
                H36y[counter] = C1y[counter] + rB_H36y;
                H36z[counter] = C1z[counter] + rB_H36z;
                
                H37x[counter] = C1x[counter] + rB_H37x;
                H37y[counter] = C1y[counter] + rB_H37y;
                H37z[counter] = C1z[counter] + rB_H37z;
                
                H38x[counter] = C1x[counter] + rB_H38x;
                H38y[counter] = C1y[counter] + rB_H38y;
                H38z[counter] = C1z[counter] + rB_H38z;
                
                H39x[counter] = C1x[counter] + rB_H39x;
                H39y[counter] = C1y[counter] + rB_H39y;
                H39z[counter] = C1z[counter] + rB_H39z;
                
                H40x[counter] = C1x[counter] + rB_H40x;
                H40y[counter] = C1y[counter] + rB_H40y;
                H40z[counter] = C1z[counter] + rB_H40z;
                
                H41x[counter] = C1x[counter] + rB_H41x;
                H41y[counter] = C1y[counter] + rB_H41y;
                H41z[counter] = C1z[counter] + rB_H41z;
                
                H42x[counter] = C1x[counter] + rB_H42x;
                H42y[counter] = C1y[counter] + rB_H42y;
                H42z[counter] = C1z[counter] + rB_H42z;
                
                H43x[counter] = C1x[counter] + rB_H43x;
                H43y[counter] = C1y[counter] + rB_H43y;
                H43z[counter] = C1z[counter] + rB_H43z;
                
                H44x[counter] = C1x[counter] + rB_H44x;
                H44y[counter] = C1y[counter] + rB_H44y;
                H44z[counter] = C1z[counter] + rB_H44z;
                
                H45x[counter] = C1x[counter] + rB_H45x;
                H45y[counter] = C1y[counter] + rB_H45y;
                H45z[counter] = C1z[counter] + rB_H45z;
                
                H46x[counter] = C1x[counter] + rB_H46x;
                H46y[counter] = C1y[counter] + rB_H46y;
                H46z[counter] = C1z[counter] + rB_H46z;
                
                H47x[counter] = C1x[counter] + rB_H47x;
                H47y[counter] = C1y[counter] + rB_H47y;
                H47z[counter] = C1z[counter] + rB_H47z;
                
                H48x[counter] = C1x[counter] + rB_H48x;
                H48y[counter] = C1y[counter] + rB_H48y;
                H48z[counter] = C1z[counter] + rB_H48z;
                
                H49x[counter] = C1x[counter] + rB_H49x;
                H49y[counter] = C1y[counter] + rB_H49y;
                H49z[counter] = C1z[counter] + rB_H49z;
                
                H50x[counter] = C1x[counter] + rB_H50x;
                H50y[counter] = C1y[counter] + rB_H50y;
                H50z[counter] = C1z[counter] + rB_H50z;
                
                H51x[counter] = C1x[counter] + rB_H51x;
                H51y[counter] = C1y[counter] + rB_H51y;
                H51z[counter] = C1z[counter] + rB_H51z;
                
                H52x[counter] = C1x[counter] + rB_H52x;
                H52y[counter] = C1y[counter] + rB_H52y;
                H52z[counter] = C1z[counter] + rB_H52z;
                
                H53x[counter] = C1x[counter] + rB_H53x;
                H53y[counter] = C1y[counter] + rB_H53y;
                H53z[counter] = C1z[counter] + rB_H53z;
                
                H54x[counter] = C1x[counter] + rB_H54x;
                H54y[counter] = C1y[counter] + rB_H54y;
                H54z[counter] = C1z[counter] + rB_H54z;
                
                H55x[counter] = C1x[counter] + rB_H55x;
                H55y[counter] = C1y[counter] + rB_H55y;
                H55z[counter] = C1z[counter] + rB_H55z;
                
                H56x[counter] = C1x[counter] + rB_H56x;
                H56y[counter] = C1y[counter] + rB_H56y;
                H56z[counter] = C1z[counter] + rB_H56z;
                
                H57x[counter] = C1x[counter] + rB_H57x;
                H57y[counter] = C1y[counter] + rB_H57y;
                H57z[counter] = C1z[counter] + rB_H57z;
                
                H58x[counter] = C1x[counter] + rB_H58x;
                H58y[counter] = C1y[counter] + rB_H58y;
                H58z[counter] = C1z[counter] + rB_H58z;
                
                H59x[counter] = C1x[counter] + rB_H59x;
                H59y[counter] = C1y[counter] + rB_H59y;
                H59z[counter] = C1z[counter] + rB_H59z;
                
                H60x[counter] = C1x[counter] + rB_H60x;
                H60y[counter] = C1y[counter] + rB_H60y;
                H60z[counter] = C1z[counter] + rB_H60z;
                
                H61x[counter] = C1x[counter] + rB_H61x;
                H61y[counter] = C1y[counter] + rB_H61y;
                H61z[counter] = C1z[counter] + rB_H61z;
                
                N1x[counter] = C1x[counter] + rB_N1x;
                N1y[counter] = C1y[counter] + rB_N1y;
                N1z[counter] = C1z[counter] + rB_N1z;
                
                N2x[counter] = C1x[counter] + rB_N2x;
                N2y[counter] = C1y[counter] + rB_N2y;
                N2z[counter] = C1z[counter] + rB_N2z;
                
                N3x[counter] = C1x[counter] + rB_N3x;
                N3y[counter] = C1y[counter] + rB_N3y;
                N3z[counter] = C1z[counter] + rB_N3z;
                
                N4x[counter] = C1x[counter] + rB_N4x;
                N4y[counter] = C1y[counter] + rB_N4y;
                N4z[counter] = C1z[counter] + rB_N4z;
                
                N5x[counter] = C1x[counter] + rB_N5x;
                N5y[counter] = C1y[counter] + rB_N5y;
                N5z[counter] = C1z[counter] + rB_N5z;
                
                N6x[counter] = C1x[counter] + rB_N6x;
                N6y[counter] = C1y[counter] + rB_N6y;
                N6z[counter] = C1z[counter] + rB_N6z;
                
                N7x[counter] = C1x[counter] + rB_N7x;
                N7y[counter] = C1y[counter] + rB_N7y;
                N7z[counter] = C1z[counter] + rB_N7z;
                
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
                
                O17x[counter] = C14x[counter] + rB_O17x;
                O17y[counter] = C14y[counter] + rB_O17y;
                O17z[counter] = C14z[counter] + rB_O17z;
                
                O18x[counter] = C15[counter] + rB_O18x;
                O18y[counter] = C15[counter] + rB_O18y; 
                O18z[counter] = C15[counter] + rB_O18z;
                
                O19x[counter] = C16x[counter] + rB_O19x;
                O19y[counter] = C16y[counter] + rB_O19y;
                O19z[counter] = C16z[counter] + rB_O19z;
                
                
    // hasil iterasi dimasukkan ke dalam file xyz
    ofstream file;
    file.open("molekul-protein.xyz");
    int N = 125 * 3;
    file << N << "\n" << endl;

    // iterasi dalam output array
    for(int m = 0; m < 125; m++){
        file << setw(3) << "C" << setw(3) << " " \
             << fixed << setprecision(3) << Cx[m] << setw(3) << " " \
             << fixed << setprecision(3) << Cy[m] << setw(3) << " " \
             << fixed << setprecision(3) << Cz[m] << "\n";

        file << setw(3) << "H" << setw(3) << " " \
             << fixed << setprecision(3) << Hx[m] << setw(3) << " " \
             << fixed << setprecision(3) << Hy[m] << setw(3) << " " \
             << fixed << setprecision(3) << Hz[m] << "\n";

        file << setw(3) << "N" << setw(3) << " " \
             << fixed << setprecision(3) << Nx[m] << setw(3) << " " \
             << fixed << setprecision(3) << Ny[m] << setw(3) << " " \
             << fixed << setprecision(3) << Nz[m] << "\n";
        
        file << setw(3) << "O" << setw(3) << " " \
             << fixed << setprecision(3) << Ox[m] << setw(3) << " " \
             << fixed << setprecision(3) << Oy[m] << setw(3) << " " \
             << fixed << setprecision(3) << Oz[m] << "\n";
    }

    file.close();

    cout << "program telah selesai";

    return 0;
}
