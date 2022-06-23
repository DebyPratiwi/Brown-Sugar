%%writefile molekul-protein-lysozyme.cpp

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
    float C3x, C3y, C3z;
    float C4x, C4y, C4z;
    float C5x, C5y, C5z;
    float C6x, C6y, C6z;
    float C7x, C7y, C7z;
    float C8x, C8y, C8z;
    float C9x, C9y, C9z;
    float C10x, C10y, C10z;
    float C11x, C11y, C11z;
    float C12x, C12y, C12z;
    float C13x, C13y, C13z;
    float C14x, C14y, C14z;
    float C15x, C15y, C15z;
    float C16x, C16y, C16z;
    float C17x, C17y, C17z;
    float C18x, C18y, C18z;
    float C19x, C19y, C19z;
    float C20x, C20y, C20z;
    float C21x, C21y, C21z;
    float C22x, C22y, C22z;
    float C23x, C23y, C23z;
    float C24x, C24y, C24z;
    float C25x, C25y, C25z;
    float C26x, C26y, C26z;
    float C27x, C27y, C27z;
    float C28x, C28y, C28z;
    float C29x, C29y, C29z;
    float C30x, C30y, C30z;
    float C31x, C31y, C31z;
    float C32x, C32y, C32z;
    float C33x, C33y, C33z;
    float C34x, C34y, C34z;
    float C35x, C35y, C35z;
    float C36x, C36y, C36z;
    float H1x, H1y, H1z;
    float H2x, H2y, H2z;
    float H3x, H3y, H3z;
    float H4x, H4y, H4z;
    float H5x, H5y, H5z;
    float H6x, H6y, H6z;
    float H7x, H7y, H7z;
    float H8x, H8y, H8z;
    float H9x, H9y, H9z;
    float H10x, H10y, H10z;
    float H11x, H11y, H11z;
    float H12x, H12y, H12z;
    float H13x, H13y, H13z;
    float H14x, H14y, H14z;
    float H15x, H15y, H15z;
    float H16x, H16y, H16z;
    float H17x, H17y, H17z;
    float H18x, H18y, H18z;
    float H19x, H19y, H19z;
    float H20x, H20y, H20z;
    float H21x, H21y, H21z;
    float H22x, H22y, H22z;
    float H23x, H23y, H23z;
    float H24x, H24y, H24z;
    float H25x, H25y, H25z;
    float H26x, H26y, H26z;
    float H27x, H27y, H27z;
    float H28x, H28y, H28z;
    float H29x, H29y, H29z;
    float H30x, H30y, H30z;
    float H31x, H31y, H31z;
    float H32x, H32y, H32z;
    float H33x, H33y, H33z;
    float H34x, H34y, H34z;
    float H35x, H35y, H35z;
    float H36x, H36y, H36z;
    float H37x, H37y, H37z;
    float H38x, H38y, H38z;
    float H39x, H39y, H39z;
    float H40x, H40y, H40z;
    float H41x, H41y, H41z;
    float H42x, H42y, H42z;
    float H43x, H43y, H43z;
    float H44x, H44y, H44z;
    float H45x, H45y, H45z;
    float H46x, H46y, H46z;
    float H47x, H47y, H47z;
    float H48x, H48y, H48z;
    float H49x, H49y, H49z;
    float H50x, H50y, H50z;
    float H51x, H51y, H51z;
    float H52x, H52y, H52z;
    float H53x, H53y, H53z;
    float H54x, H54y, H54z;
    float H55x, H55y, H55z;
    float H56x, H56y, H56z;
    float H57x, H57y, H57z;
    float H58x, H58y, H58z;
    float H59x, H59y, H59z;
    float H60x, H60y, H60z;
    float H61x, H60y, H61z;
    float N1x, N1y, N1z;
    float N2x, H2y, N2z;
    float N3x, N3y, N3z;
    float N4x, H4y, N4z;
    float N5x, N5y, N5z;
    float N6x, H6y, N6z;
    float H7x, H7y, N7z;
    float O1x, O1y, O1z;
    float O2x, O2y, O2z;
    float O3x, O3y, O3z;
    float O4x, O4y, O4z;
    float O5x, O5y, O5z;
    float O6x, O6y, O6z;
    float O7x, O7y, O7z;
    float O8x, O8y, O8z;
    float O9x, O9y, O9z;
    float O10x, O10y, O10z;
    float O11x, O11y, O11z;
    float O12x, O12y, O12z;
    float O13x, O13y, O13z;
    float O14x, O14y, O14z;
    float O15x, O15y, O15z;
    float O16x, O16y, O16z;
    float O17x, O17y, O17z;
    float O18x, O18y, O18z;
    float O19x, O19y, O19z;

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
        
        float rB_C2x = sin((1.54/2.0)*pi/180.0) * 1.090;
        float rB_C2y = 0.0;
        float rB_C2z = cos((1.54/2.0)*pi/180.0) * 1.090;

        float rB_C3x = rB_C2x
        float rB_C3y = rB_C2y
        float rB_C3z = rB_C2z

        float rB_C4x = rB_C2x
        float rB_C4y = rB_C2y
        float rB_C4z = rB_C2z

        float rB_C5x = rB_C2x
        float rB_C5y = rB_C2y
        float rB_C5z = rB_C2z

        float rB_C6x = rB_C2x
        float rB_C6y = rB_C2y
        float rB_C6z = rB_C2z

        float rB_C7x = rB_C2x
        float rB_C7y = rB_C2y
        float rB_C7z = rB_C2z

        float rB_C8x = rB_C2x
        float rB_C8y = rB_C2y
        float rB_C8z = rB_C2z

        float rB_C9x = rB_C2x
        float rB_C9y = rB_C2y
        float rB_C9z = rB_C2z

        float rB_C10x = rB_C2x
        float rB_C10y = rB_C2y
        float rB_C10z = rB_C2z

        float rB_C11x = rB_C2x
        float rB_C11y = rB_C2y
        float rB_C11z = rB_C2z

        float rB_C12x = rB_C2x
        float rB_C12y = rB_C2y
        float rB_C12z = rB_C2z

        float rB_C13x = rB_C2x
        float rB_C13y = rB_C2y
        float rB_C13z = rB_C2z

        float rB_C14x = rB_C2x
        float rB_C14y = rB_C2y
        float rB_C14z = rB_C2z

        float rB_C15x = rB_C2x
        float rB_C15y = rB_C2y
        float rB_C15z = rB_C2z

        float rB_C16x = rB_C2x
        float rB_C16y = rB_C2y
        float rB_C16z = rB_C2z

        float rB_C17x = rB_C2x
        float rB_C17y = rB_C2y
        float rB_C17z = rB_C2z

        float rB_C18x = rB_C2x
        float rB_C18y = rB_C2y
        float rB_C18z = rB_C2z

        float rB_C19x = rB_C2x
        float rB_C19y = rB_C2y
        float rB_C19z = rB_C2z

        float rB_C20x = rB_C2x
        float rB_C20y = rB_C2y
        float rB_C20z = rB_C2z

        float rB_C21x = rB_C2x
        float rB_C21y = rB_C2y
        float rB_C21z = rB_C2z

        float rB_C22x = rB_C2x
        float rB_C22y = rB_C2y
        float rB_C22z = rB_C2z
    
        float rB_C23x = rB_C2x
        float rB_C23y = rB_C2y
        float rB_C23z = rB_C2z

        float rB_C24x = rB_C2x
        float rB_C24y = rB_C2y
        float rB_C24z = rB_C2z

        float rB_C25x = rB_C2x
        float rB_C25y = rB_C2y
        float rB_C25z = rB_C2z

        float rB_C26x = rB_C2x
        float rB_C26y = rB_C2y
        float rB_C26z = rB_C2z

        float rB_C27x = rB_C2x
        float rB_C27y = rB_C2y
        float rB_C27z = rB_C2z

        float rB_C28x = rB_C2x
        float rB_C28y = rB_C2y
        float rB_C28z = rB_C2z

        float rB_C29x = rB_C2x
        float rB_C29y = rB_C2y
        float rB_C29z = rB_C2z

        float rB_C30x = rB_C2x
        float rB_C30y = rB_C2y
        float rB_C30z = rB_C2z

        float rB_C31x = rB_C2x
        float rB_C31y = rB_C2y
        float rB_C31z = rB_C2z

        float rB_C32x = rB_C2x
        float rB_C32y = rB_C2y
        float rB_C32z = rB_C2z

        float rB_C33x = rB_C2x
        float rB_C33y = rB_C2y
        float rB_C33z = rB_C2z

        float rB_C34x = rB_C2x
        float rB_C34y = rB_C2y
        float rB_C34z = rB_C2z

        float rB_C35x = rB_C2x
        float rB_C35y = rB_C2y
        float rB_C35z = rB_C2z

        float rB_C36x = rB_C2x
        float rB_C36y = rB_C2y
        float rB_C36z = rB_C2z

        float rB_H1x = - sin((1.095/2.0)*pi/180.0) * 1.090;
        float rB_H1y = 0.0
        float rB_H1z = cos((1.095/2.0)*pi/180.0) * 1.090;
    
        float rB_H2x = - rB_H1x;
        float rB_H2y = rB_H1y;
        float rB_H2z = rB_H1z;

        float rB_H3x = - rB_H1x;
        float rB_H3y = rB_H1y;
        float rB_H3z = rB_H1z;

        float rB_H4x = - rB_H1x;
        float rB_H4y = rB_H1y;
        float rB_H4z = rB_H1z;

        float rB_H5x = - rB_H1x;
        float rB_H5y = rB_H1y;
        float rB_H5z = rB_H1z;

        float rB_H6x = - rB_H1x;
        float rB_H6y = rB_H1y;
        float rB_H6z = rB_H1z;

        float rB_H7x = - rB_H1x;
        float rB_H7y = rB_H1y;
        float rB_H7z = rB_H1z;

        float rB_H8x = - rB_H1x;
        float rB_H8y = rB_H1y;
        float rB_H8z = rB_H1z;

        float rB_H9x = - rB_H1x;
        float rB_H9y = rB_H1y;
        float rB_H9z = rB_H1z;

        float rB_H10x = - rB_H1x;
        float rB_H10y = rB_H1y;
        float rB_H10z = rB_H1z;

        float rB_H11x = - rB_H1x;
        float rB_H11y = rB_H1y;
        float rB_H11z = rB_H1z;

        float rB_H12x = - rB_H1x;
        float rB_H12y = rB_H1y;
        float rB_H12z = rB_H1z;

        float rB_H13x = - rB_H1x;
        float rB_H13y = rB_H1y;
        float rB_H13z = rB_H1z;

        float rB_H14x = - rB_H1x;
        float rB_H14y = rB_H1y;
        float rB_H14z = rB_H1z;

        float rB_H15x = - rB_H1x;
        float rB_H15y = rB_H1y;
        float rB_H15z = rB_H1z;

        float rB_H16x = - rB_H1x;
        float rB_H16y = rB_H1y;
        float rB_H16z = rB_H1z;

        float rB_H17x = - rB_H1x;
        float rB_H17y = rB_H1y;
        float rB_H17z = rB_H1z;

        float rB_H18x = - rB_H1x;
        float rB_H18y = rB_H1y;
        float rB_H18z = rB_H1z;

        float rB_H19x = - rB_H1x;
        float rB_H19y = rB_H1y;
        float rB_H19z = rB_H1z;

        float rB_H20x = - rB_H1x;
        float rB_H20y = rB_H1y;
        float rB_H20z = rB_H1z;

        float rB_H21x = - rB_H1x;
        float rB_H21y = rB_H1y;
        float rB_H21z = rB_H1z;

        float rB_H22x = - rB_H1x;
        float rB_H22y = rB_H1y;
        float rB_H22z = rB_H1z;

        float rB_H23x = - rB_H1x;
        float rB_H23y = rB_H1y;
        float rB_H23z = rB_H1z;

        float rB_H24x = - rB_H1x;
        float rB_H24y = rB_H1y;
        float rB_H24z = rB_H1z;

        float rB_H25x = - rB_H1x;
        float rB_H25y = rB_H1y;
        float rB_H25z = rB_H1z;

        float rB_H26x = - rB_H1x;
        float rB_H26y = rB_H1y;
        float rB_H26z = rB_H1z;

        float rB_H27x = - rB_H1x;
        float rB_H27y = rB_H1y;
        float rB_H27z = rB_H1z;

        float rB_H28x = - rB_H1x;
        float rB_H28y = rB_H1y;
        float rB_H28z = rB_H1z;

        float rB_H29x = - rB_H1x;
        float rB_H29y = rB_H1y;
        float rB_H29z = rB_H1z;

        float rB_H30x = - rB_H1x;
        float rB_H30y = rB_H1y;
        float rB_H30z = rB_H1z;

        float rB_H31x = - rB_H1x;
        float rB_H31y = rB_H1y;
        float rB_H31z = rB_H1z;

        float rB_H32x = - rB_H1x;
        float rB_H32y = rB_H1y;
        float rB_H32z = rB_H1z;

        float rB_H33x = - rB_H1x;
        float rB_H33y = rB_H1y;
        float rB_H33z = rB_H1z;

        float rB_H34x = - rB_H1x;
        float rB_H34y = rB_H1y;
        float rB_H34z = rB_H1z;

        float rB_H35x = - rB_H1x;
        float rB_H35y = rB_H1y;
        float rB_H35z = rB_H1z;

        float rB_H36x = - rB_H1x;
        float rB_H36y = rB_H1y;
        float rB_H36z = rB_H1z;

        float rB_H37x = - rB_H1x
        float rB_H37y = rB_H1y
        float rB_H37z = rB_H1z

        float rB_H38x = - rB_H1x
        float rB_H38y = rB_H1y
        float rB_H38z = rB_H1z

        float rB_H39x = - rB_H1x
        float rB_H39y = rB_H1y
        float rB_H39z = rB_H1z

        float rB_H40x = - rB_H1x
        float rB_H40y = rB_H1y
        float rB_H40z = rB_H1z

        float rB_H41x = - rB_H1x
        float rB_H41y = rB_H1y
        float rB_H41z = rB_H1z

        float rB_H42x = - rB_H1x
        float rB_H42y = rB_H1y
        float rB_H42z = rB_H1z

        float rB_H43x = - rB_H1x;
        float rB_H43y = rB_H1y;
        float rB_H43z = rB_H1z;

        float rB_H44x = - rB_H1x;
        float rB_H44y = rB_H1y;
        float rB_H44z = rB_H1z;

        float rB_H45x = - rB_H1x;
        float rB_H45y = rB_H1y;
        float rB_H45z = rB_H1z;

        float rB_H46x = - rB_H1x;
        float rB_H46y = rB_H1y;
        float rB_H46z = rB_H1z;

        float rB_H47x = - rB_H1x;
        float rB_H47y = rB_H1y;
        float rB_H47z = rB_H1z;

        float rB_H48x = - rB_H1x;
        float rB_H48y = rB_H1y;
        float rB_H48z = rB_H1z;

        float rB_H49x = - rB_H1x;
        float rB_H49y = rB_H1y;
        float rB_H49z = rB_H1z;

        float rB_H50x = - rB_H1x;
        float rB_H50y = rB_H1y;
        float rB_H50z = rB_H1z;

        float rB_H51x = - rB_H1x;
        float rB_H51y = rB_H1y;
        float rB_H51z = rB_H1z;

        float rB_H52x = - rB_H1x;
        float rB_H52y = rB_H1y;
        float rB_H52z = rB_H1z;

        float rB_H53x = - rB_H1x;
        float rB_H53y = rB_H1y;
        float rB_H53z = rB_H1z;

        float rB_H54x = - rB_H1x;
        float rB_H54y = rB_H1y;
        float rB_H54z = rB_H1z;
    
        float rB_H53x = - rB_H1x;
        float rB_H53y = rB_H1y;
        float rB_H53z = rB_H1z;

        float rB_H54x = - rB_H1x;
        float rB_H54y = rB_H1y;
        float rB_H54z = rB_H1z;

        float rB_H55x = - rB_H1x;
        float rB_H55y = rB_H1y;
        float rB_H55z = rB_H1z;

        float rB_H56x = - rB_H1x;
        float rB_H56y = rB_H1y;
        float rB_H56z = rB_H1z;

        float rB_H57x = - rB_H1x;
        float rB_H57y = rB_H1y;
        float rB_H57z = rB_H1z;

        float rB_H58x = - rB_H1x;
        float rB_H58y = rB_H1y;
        float rB_H58z = rB_H1z;

        float rB_H59x = - rB_H1x;
        float rB_H59y = rB_H1y;
        float rB_H59z = rB_H1z;

        float rB_H60x = - rB_H1x;
        float rB_H60y = rB_H1y;
        float rB_H60z = rB_H1z;

        float rB_H61x = - rB_H1x;
        float rB_H61y = rB_H1y;
        float rB_H61z = rB_H1z;

        float rB_N1x = 0.0;
        float rB_N1y = cos((1.47/2.0)*pi/180.0) * 1.090;
        float rB_N1z = sin((1.47/2.0)*pi/180.0) * 1.090;
    
        float rB_N2x = rB_N1x;
        float rB_N2y = rB_N1y;
        float rB_N2z = - rB_N1z;

        float rB_N3x = rB_N1x;
        float rB_N3y = rB_N1y;
        float rB_N3z = - rB_N1z;

        float rB_N4x = rB_N1x;
        float rB_N4y = rB_N1y;
        float rB_N4z = - rB_N1z;

        float rB_N5x = rB_N1x;
        float rB_N5y = rB_N1y;
        float rB_N5z = - rB_N1z;

        float rB_N6x = rB_N1x;
        float rB_N6y = rB_N1y;
        float rB_N6z = - rB_N1z; 

        float rB_N7x = rB_N1x;
        float rB_N7y = rB_N1y;
        float rB_N7z = - rB_N1z;

        float rB_O1x = 0.0;
        float rB_O1y = 0.0;
        float rB_O1z = 0.0;
        
        float rB_O2x = sin((1.34/2.0)*pi/180.0) * 1.090;
        float rB_O2y = 0.0;
        float rB_O2z = cos((1.34/2.0)*pi/180.0) * 1.090;

        float rB_O3x = rB_O2x;
        float rB_O3y = rB_O2y;
        float rB_O3z = - rB_O2z;

        float rB_O4x = rB_O2x;
        float rB_O4y = rB_O2y;
        float rB_O4z = - rB_O2z;

        float rB_O5x = rB_O2x;
        float rB_O5y = rB_O2y;
        float rB_O5z = - rB_O2z;

        float rB_O6x = rB_O2x;
        float rB_O6y = rB_O2y;
        float rB_O6z = - rB_O2z;

        float rB_O7x = rB_O2x;
        float rB_O7y = rB_O2y;
        float rB_O7z = - rB_O2z;

        float rB_O8x = rB_O2x;
        float rB_O8y = rB_O2y;
        float rB_O8z = - rB_O2z;

        float rB_O9x = rB_O2x;
        float rB_O9y = rB_O2y;
        float rB_O9z = - rB_O2z;

        float rB_O10x = rB_O2x;
        float rB_O10y = rB_O2y;
        float rB_O10z = - rB_O2z;

        float rB_O11x = rB_O2x;
        float rB_O11y = rB_O2y;
        float rB_O11z = - rB_O2z;

        float rB_O12x = rB_O2x;
        float rB_O12y = rB_O2y;
        float rB_O12z = - rB_O2z;

        float rB_O13x = rB_O2x;
        float rB_O13y = rB_O2y;
        float rB_O13z = - rB_O2z;

        float rB_O14x = rB_O2x;
        float rB_O14y = rB_O2y;
        float rB_O14z = - rB_O2z;

        float rB_O15x = rB_O2x;
        float rB_O15y = rB_O2y;
        float rB_O15z = - rB_O2z;

        float rB_O16x = rB_O2x;
        float rB_O16y = rB_O2y;
        float rB_O16z = - rB_O2z;

        float rB_O17x = rB_O2x;
        float rB_O17y = rB_O2y;
        float rB_O17z = - rB_O2z;

        float rB_O18x = rB_O2x;
        float rB_O18y = rB_O2y;
        float rB_O18z = - rB_O2z;

        float rB_O19x = rB_O2x;
        float rB_O19y = rB_O2y;
        float rB_O19z = - rB_O2z;
    
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
                
                O11x[counter] = C1x[counter] + rB_O11x;
                O11y[counter] = C1y[counter] + rB_O11y;
                O11z[counter] = C1z[counter] + rB_O11x;
                
                O12x[counter] = C1x[counter] + rB_O12x;
                O12y[counter] = C1y[counter] + rB_O12y;
                O12z[counter] = C1z[counter] + rB_O12z;
                
                O13x[counter] = C1x[counter] + rB_O13x;
                O13y[counter] = C1y[counter] + rB_O13y;
                O13z[counter] = C1z[counter] + rB_O13z;
                
                O14x[counter] = C1x[counter] + rB_O14x;
                O14y[counter] = C1y[counter] + rB_O14y;
                O14z[counter] = C1z[counter] + rB_O14z;
                
                O15x[counter] = C1x[counter] + rB_O15x;
                O15y[counter] = C1y[counter] + rB_O15y; 
                O15z[counter] = C1z[counter] + rB_O15z;
                
                O16x[counter] = C1x[counter] + rB_O16x;
                O16y[counter] = C1y[counter] + rB_O16y;
                O16z[counter] = C1z[counter] + rB_O16z;
                
                O17x[counter] = C1x[counter] + rB_O17x;
                O17y[counter] = C1y[counter] + rB_O17y;
                O17z[counter] = C1z[counter] + rB_O17z;
                
                O18x[counter] = C1x[counter] + rB_O18x;
                O18y[counter] = C1y[counter] + rB_O18y; 
                O18z[counter] = C1z[counter] + rB_O18z;
                
                O19x[counter] = C1x[counter] + rB_O19x;
                O19y[counter] = C1y[counter] + rB_O19y;
                O19z[counter] = C1z[counter] + rB_O19z;
                
                
    // hasil iterasi dimasukkan ke dalam file xyz
    ofstream file;
    file.open("molekul-protein-Lysozyme.xyz");
    int N = 125 * 3;
    file << N << "\n" << endl;

    // iterasi dalam output array
    for(int m = 0; m < 125; m++){
        file << setw(3) << "C1" << setw(3) << " " \
             << fixed << setprecision(3) << C1x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C1y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C1z[m] << "\n";

        file << setw(3) << "C2" << setw(3) << " " \
             << fixed << setprecision(3) << C2x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C2y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C2z[m] << "\n";

        file << setw(3) << "C3" << setw(3) << " " \
             << fixed << setprecision(3) << C3x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C3y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C3z[m] << "\n";

        file << setw(3) << "C4" << setw(3) << " " \
             << fixed << setprecision(3) << C4x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C4y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C4z[m] << "\n";

        file << setw(3) << "C5" << setw(3) << " " \
             << fixed << setprecision(3) << C5x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C5y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C5z[m] << "\n";

        file << setw(3) << "C6" << setw(3) << " " \
             << fixed << setprecision(3) << C6x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C6y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C6z[m] << "\n";

        file << setw(3) << "C7" << setw(3) << " " \
             << fixed << setprecision(3) << C7x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C7y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C7z[m] << "\n";

        file << setw(3) << "C8" << setw(3) << " " \
             << fixed << setprecision(3) << C8x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C8y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C8z[m] << "\n";

        file << setw(3) << "C9" << setw(3) << " " \
             << fixed << setprecision(3) << C9x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C9y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C9z[m] << "\n";

        file << setw(3) << "C10" << setw(3) << " " \
             << fixed << setprecision(3) << C10x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C10y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C10z[m] << "\n";

        file << setw(3) << "C11" << setw(3) << " " \
             << fixed << setprecision(3) << C11x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C11y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C11z[m] << "\n";

        file << setw(3) << "C12" << setw(3) << " " \
             << fixed << setprecision(3) << C12x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C12y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C12z[m] << "\n";

        file << setw(3) << "C13" << setw(3) << " " \
             << fixed << setprecision(3) << C13x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C13y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C13z[m] << "\n";

        file << setw(3) << "C14" << setw(3) << " " \
             << fixed << setprecision(3) << C14x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C14y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C14z[m] << "\n";

        file << setw(3) << "C15" << setw(3) << " " \
             << fixed << setprecision(3) << C15x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C15y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C15z[m] << "\n";

        file << setw(3) << "C16" << setw(3) << " " \
             << fixed << setprecision(3) << C16x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C16y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C16z[m] << "\n";

        file << setw(3) << "C17" << setw(3) << " " \
             << fixed << setprecision(3) << C17x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C17y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C17z[m] << "\n";

        file << setw(3) << "C18" << setw(3) << " " \
             << fixed << setprecision(3) << C18x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C18y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C18z[m] << "\n";

        file << setw(3) << "C19" << setw(3) << " " \
             << fixed << setprecision(3) << C19x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C19y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C19z[m] << "\n";

        file << setw(3) << "C20" << setw(3) << " " \
             << fixed << setprecision(3) << C20x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C20y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C20z[m] << "\n";

        file << setw(3) << "C21" << setw(3) << " " \
             << fixed << setprecision(3) << C21x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C21y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C21z[m] << "\n";

        file << setw(3) << "C22" << setw(3) << " " \
             << fixed << setprecision(3) << C22x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C22y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C22z[m] << "\n";

        file << setw(3) << "C23" << setw(3) << " " \
             << fixed << setprecision(3) << C23x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C23y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C23z[m] << "\n";

        file << setw(3) << "C24" << setw(3) << " " \
             << fixed << setprecision(3) << C24x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C24y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C24z[m] << "\n";

        file << setw(3) << "C25" << setw(3) << " " \
             << fixed << setprecision(3) << C25x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C25y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C25z[m] << "\n";

        file << setw(3) << "C26" << setw(3) << " " \
             << fixed << setprecision(3) << C26x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C26y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C26z[m] << "\n";

        file << setw(3) << "C27" << setw(3) << " " \
             << fixed << setprecision(3) << C27x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C27y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C27z[m] << "\n";

        file << setw(3) << "C28" << setw(3) << " " \
             << fixed << setprecision(3) << C28x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C28y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C28z[m] << "\n";

        file << setw(3) << "C29" << setw(3) << " " \
             << fixed << setprecision(3) << C29x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C29y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C29z[m] << "\n";

        file << setw(3) << "C30" << setw(3) << " " \
             << fixed << setprecision(3) << C30x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C30y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C30z[m] << "\n";

        file << setw(3) << "C31" << setw(3) << " " \
             << fixed << setprecision(3) << C31x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C31y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C31z[m] << "\n";

        file << setw(3) << "C32" << setw(3) << " " \
             << fixed << setprecision(3) << C32x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C32y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C32z[m] << "\n";

        file << setw(3) << "C33" << setw(3) << " " \
             << fixed << setprecision(3) << C33x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C33y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C33z[m] << "\n";

        file << setw(3) << "C34" << setw(3) << " " \
             << fixed << setprecision(3) << C34x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C34y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C34z[m] << "\n";

        file << setw(3) << "C35" << setw(3) << " " \
             << fixed << setprecision(3) << C35x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C35y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C35z[m] << "\n";

        file << setw(3) << "C36" << setw(3) << " " \
             << fixed << setprecision(3) << C36x[m] << setw(3) << " " \
             << fixed << setprecision(3) << C36y[m] << setw(3) << " " \
             << fixed << setprecision(3) << C36z[m] << "\n";

        file << setw(3) << "H1" << setw(3) << " " \
             << fixed << setprecision(3) << H1x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H1y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H1z[m] << "\n";

        file << setw(3) << "H2" << setw(3) << " " \
             << fixed << setprecision(3) << H2x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H2y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H2z[m] << "\n";

        file << setw(3) << "H3" << setw(3) << " " \
             << fixed << setprecision(3) << H3x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H3y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H3z[m] << "\n";

        file << setw(3) << "H4" << setw(3) << " " \
             << fixed << setprecision(3) << H4x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H4y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H4z[m] << "\n";

        file << setw(3) << "H5" << setw(3) << " " \
             << fixed << setprecision(3) << H5x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H5y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H5z[m] << "\n";

        file << setw(3) << "H6" << setw(3) << " " \
             << fixed << setprecision(3) << H6x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H6y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H6z[m] << "\n";

        file << setw(3) << "H7" << setw(3) << " " \
             << fixed << setprecision(3) << H7x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H7y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H7z[m] << "\n";

        file << setw(3) << "H8" << setw(3) << " " \
             << fixed << setprecision(3) << H8x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H8y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H8z[m] << "\n";

        file << setw(3) << "H9" << setw(3) << " " \
             << fixed << setprecision(3) << H9x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H9y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H9z[m] << "\n";

        file << setw(3) << "H10" << setw(3) << " " \
             << fixed << setprecision(3) << H10x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H10y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H10z[m] << "\n";

        file << setw(3) << "H1" << setw(3) << " " \
             << fixed << setprecision(3) << H1x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H1y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H1z[m] << "\n";

        file << setw(3) << "H2" << setw(3) << " " \
             << fixed << setprecision(3) << H2x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H2y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H2z[m] << "\n";

        file << setw(3) << "H3" << setw(3) << " " \
             << fixed << setprecision(3) << H3x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H3y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H3z[m] << "\n";

        file << setw(3) << "H4" << setw(3) << " " \
             << fixed << setprecision(3) << H4x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H4y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H4z[m] << "\n";

        file << setw(3) << "H5" << setw(3) << " " \
             << fixed << setprecision(3) << H5x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H5y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H5z[m] << "\n";

        file << setw(3) << "H6" << setw(3) << " " \
             << fixed << setprecision(3) << H6x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H6y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H6z[m] << "\n";

        file << setw(3) << "H7" << setw(3) << " " \
             << fixed << setprecision(3) << H7x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H7y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H7z[m] << "\n";

        file << setw(3) << "H8" << setw(3) << " " \
             << fixed << setprecision(3) << H8x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H8y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H8z[m] << "\n";

        file << setw(3) << "H9" << setw(3) << " " \
             << fixed << setprecision(3) << H9x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H9y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H9z[m] << "\n";

        file << setw(3) << "H10" << setw(3) << " " \
             << fixed << setprecision(3) << H10x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H10y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H10z[m] << "\n";

        file << setw(3) << "H11" << setw(3) << " " \
             << fixed << setprecision(3) << H11x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H11y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H11z[m] << "\n";

        file << setw(3) << "H12" << setw(3) << " " \
             << fixed << setprecision(3) << H12x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H12y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H12z[m] << "\n";

        file << setw(3) << "H13" << setw(3) << " " \
             << fixed << setprecision(3) << H13x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H13y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H13z[m] << "\n";

        file << setw(3) << "H14" << setw(3) << " " \
             << fixed << setprecision(3) << H14x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H14y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H14z[m] << "\n";

        file << setw(3) << "H15" << setw(3) << " " \
             << fixed << setprecision(3) << H15x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H15y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H15z[m] << "\n";

        file << setw(3) << "H16" << setw(3) << " " \
             << fixed << setprecision(3) << H16x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H16y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H16z[m] << "\n";

        file << setw(3) << "H17" << setw(3) << " " \
             << fixed << setprecision(3) << H17x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H17y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H17z[m] << "\n";

        file << setw(3) << "H18" << setw(3) << " " \
             << fixed << setprecision(3) << H18x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H18y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H18z[m] << "\n";

        file << setw(3) << "H19" << setw(3) << " " \
             << fixed << setprecision(3) << H19x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H19y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H19z[m] << "\n";

        file << setw(3) << "H20" << setw(3) << " " \
             << fixed << setprecision(3) << H20x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H20y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H20z[m] << "\n";

        file << setw(3) << "H21" << setw(3) << " " \
             << fixed << setprecision(3) << H21x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H21y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H21z[m] << "\n";

        file << setw(3) << "H22" << setw(3) << " " \
             << fixed << setprecision(3) << H22x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H22y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H22z[m] << "\n";

        file << setw(3) << "H23" << setw(3) << " " \
             << fixed << setprecision(3) << H23x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H23y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H23z[m] << "\n";

        file << setw(3) << "H24" << setw(3) << " " \
             << fixed << setprecision(3) << H24x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H24y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H24z[m] << "\n";

        file << setw(3) << "H25" << setw(3) << " " \
             << fixed << setprecision(3) << H25x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H25y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H25z[m] << "\n";

        file << setw(3) << "H26" << setw(3) << " " \
             << fixed << setprecision(3) << H26x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H26y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H26z[m] << "\n";

        file << setw(3) << "H27" << setw(3) << " " \
             << fixed << setprecision(3) << H27x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H27y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H27z[m] << "\n";

        file << setw(3) << "H28" << setw(3) << " " \
             << fixed << setprecision(3) << H28x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H28y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H28z[m] << "\n";

        file << setw(3) << "H29" << setw(3) << " " \
             << fixed << setprecision(3) << H29x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H29y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H29z[m] << "\n";

        file << setw(3) << "H30" << setw(3) << " " \
             << fixed << setprecision(3) << H30x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H30y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H30z[m] << "\n";

        file << setw(3) << "H31" << setw(3) << " " \
             << fixed << setprecision(3) << H31x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H31y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H31z[m] << "\n";

        file << setw(3) << "H32" << setw(3) << " " \
             << fixed << setprecision(3) << H32x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H32y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H32z[m] << "\n";

        file << setw(3) << "H33" << setw(3) << " " \
             << fixed << setprecision(3) << H33x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H33y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H33z[m] << "\n";

        file << setw(3) << "H34" << setw(3) << " " \
             << fixed << setprecision(3) << H34x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H34y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H34z[m] << "\n";

        file << setw(3) << "H35" << setw(3) << " " \
             << fixed << setprecision(3) << H35x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H35y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H35z[m] << "\n";

        file << setw(3) << "H36" << setw(3) << " " \
             << fixed << setprecision(3) << H36x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H36y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H36z[m] << "\n";

        file << setw(3) << "H37" << setw(3) << " " \
             << fixed << setprecision(3) << H37x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H37y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H37z[m] << "\n";

        file << setw(3) << "H38" << setw(3) << " " \
             << fixed << setprecision(3) << H38x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H38y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H38z[m] << "\n";

        file << setw(3) << "H39" << setw(3) << " " \
             << fixed << setprecision(3) << H39x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H39y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H39z[m] << "\n";

        file << setw(3) << "H40" << setw(3) << " " \
             << fixed << setprecision(3) << H40x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H40y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H40z[m] << "\n";

        file << setw(3) << "H41" << setw(3) << " " \
             << fixed << setprecision(3) << H41x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H41y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H41z[m] << "\n";

        file << setw(3) << "H42" << setw(3) << " " \
             << fixed << setprecision(3) << H42x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H42y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H42z[m] << "\n";

        file << setw(3) << "H43" << setw(3) << " " \
             << fixed << setprecision(3) << H43x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H43y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H43z[m] << "\n";

        file << setw(3) << "H44" << setw(3) << " " \
             << fixed << setprecision(3) << H44x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H44y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H44z[m] << "\n";

        file << setw(3) << "H45" << setw(3) << " " \
             << fixed << setprecision(3) << H45x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H45y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H45z[m] << "\n";

        file << setw(3) << "H46" << setw(3) << " " \
             << fixed << setprecision(3) << H46x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H46y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H46z[m] << "\n";

        file << setw(3) << "H47" << setw(3) << " " \
             << fixed << setprecision(3) << H47x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H47y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H47z[m] << "\n";

        file << setw(3) << "H48" << setw(3) << " " \
             << fixed << setprecision(3) << H48x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H48y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H48z[m] << "\n";

        file << setw(3) << "H49" << setw(3) << " " \
             << fixed << setprecision(3) << H49x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H49y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H49z[m] << "\n";

        file << setw(3) << "H50" << setw(3) << " " \
             << fixed << setprecision(3) << H50x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H50y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H50z[m] << "\n";

        file << setw(3) << "H51" << setw(3) << " " \
             << fixed << setprecision(3) << H51x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H51y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H51z[m] << "\n";

        file << setw(3) << "H52" << setw(3) << " " \
             << fixed << setprecision(3) << H52x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H52y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H52z[m] << "\n";

        file << setw(3) << "H53" << setw(3) << " " \
             << fixed << setprecision(3) << H53x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H53y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H53z[m] << "\n";

        file << setw(3) << "H54" << setw(3) << " " \
             << fixed << setprecision(3) << H54x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H54y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H54z[m] << "\n";

        file << setw(3) << "H55" << setw(3) << " " \
             << fixed << setprecision(3) << H55x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H55y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H55z[m] << "\n";

        file << setw(3) << "H56" << setw(3) << " " \
             << fixed << setprecision(3) << H56x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H56y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H56z[m] << "\n";

        file << setw(3) << "H57" << setw(3) << " " \
             << fixed << setprecision(3) << H57x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H57y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H57z[m] << "\n";

        file << setw(3) << "H58" << setw(3) << " " \
             << fixed << setprecision(3) << H58x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H58y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H58z[m] << "\n";

        file << setw(3) << "H59" << setw(3) << " " \
             << fixed << setprecision(3) << H59x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H59y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H59z[m] << "\n";

        file << setw(3) << "H60" << setw(3) << " " \
             << fixed << setprecision(3) << H60x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H60y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H60z[m] << "\n";

        file << setw(3) << "H61" << setw(3) << " " \
             << fixed << setprecision(3) << H61x[m] << setw(3) << " " \
             << fixed << setprecision(3) << H61y[m] << setw(3) << " " \
             << fixed << setprecision(3) << H61z[m] << "\n";

        file << setw(3) << "N1" << setw(3) << " " \
             << fixed << setprecision(3) << N1x[m] << setw(3) << " " \
             << fixed << setprecision(3) << N1y[m] << setw(3) << " " \
             << fixed << setprecision(3) << N1z[m] << "\n";

        file << setw(3) << "N2" << setw(3) << " " \
             << fixed << setprecision(3) << N2x[m] << setw(3) << " " \
             << fixed << setprecision(3) << N2y[m] << setw(3) << " " \
             << fixed << setprecision(3) << N2z[m] << "\n";

        file << setw(3) << "N3" << setw(3) << " " \
             << fixed << setprecision(3) << N3x[m] << setw(3) << " " \
             << fixed << setprecision(3) << N3y[m] << setw(3) << " " \
             << fixed << setprecision(3) << N3z[m] << "\n";

        file << setw(3) << "N3" << setw(3) << " " \
             << fixed << setprecision(3) << N3x[m] << setw(3) << " " \
             << fixed << setprecision(3) << N3y[m] << setw(3) << " " \
             << fixed << setprecision(3) << N3z[m] << "\n";
            
        file << setw(3) << "N4" << setw(3) << " " \
             << fixed << setprecision(3) << N4x[m] << setw(3) << " " \
             << fixed << setprecision(3) << N4y[m] << setw(3) << " " \
             << fixed << setprecision(3) << N4z[m] << "\n";

        file << setw(3) << "N5" << setw(3) << " " \
             << fixed << setprecision(3) << N5x[m] << setw(3) << " " \
             << fixed << setprecision(3) << N5y[m] << setw(3) << " " \
             << fixed << setprecision(3) << N5z[m] << "\n";

        file << setw(3) << "N6" << setw(3) << " " \
             << fixed << setprecision(3) << N6x[m] << setw(3) << " " \
             << fixed << setprecision(3) << N6y[m] << setw(3) << " " \
             << fixed << setprecision(3) << N6z[m] << "\n";

        file << setw(3) << "N7" << setw(3) << " " \
             << fixed << setprecision(3) << N7x[m] << setw(3) << " " \
             << fixed << setprecision(3) << N7y[m] << setw(3) << " " \
             << fixed << setprecision(3) << N7z[m] << "\n";
        
        file << setw(3) << "O1" << setw(3) << " " \
             << fixed << setprecision(3) << O1x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O1y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O1z[m] << "\n";

        file << setw(3) << "O2" << setw(3) << " " \
             << fixed << setprecision(3) << O2x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O2y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O2z[m] << "\n";

        file << setw(3) << "O3" << setw(3) << " " \
             << fixed << setprecision(3) << O3x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O3y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O3z[m] << "\n";

        file << setw(3) << "O4" << setw(3) << " " \
             << fixed << setprecision(3) << O4x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O4y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O4z[m] << "\n";

        file << setw(3) << "O5" << setw(3) << " " \
             << fixed << setprecision(3) << O5x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O5y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O5z[m] << "\n";

        file << setw(3) << "O6" << setw(3) << " " \
             << fixed << setprecision(3) << O6x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O6y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O6z[m] << "\n";

        file << setw(3) << "O7" << setw(3) << " " \
             << fixed << setprecision(3) << O7x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O7y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O7z[m] << "\n";

        file << setw(3) << "O8" << setw(3) << " " \
             << fixed << setprecision(3) << O8x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O8y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O8z[m] << "\n";

        file << setw(3) << "O9" << setw(3) << " " \
             << fixed << setprecision(3) << O9x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O9y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O9z[m] << "\n";

        file << setw(3) << "O10" << setw(3) << " " \
             << fixed << setprecision(3) << O10x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O10y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O10z[m] << "\n";

        file << setw(3) << "O11" << setw(3) << " " \
             << fixed << setprecision(3) << O11x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O11y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O11z[m] << "\n";

        file << setw(3) << "O12" << setw(3) << " " \
             << fixed << setprecision(3) << O12x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O12y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O12z[m] << "\n";

        file << setw(3) << "O13" << setw(3) << " " \
             << fixed << setprecision(3) << O13x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O13y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O13z[m] << "\n";

        file << setw(3) << "O14" << setw(3) << " " \
             << fixed << setprecision(3) << O14x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O14y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O14z[m] << "\n";

        file << setw(3) << "O15" << setw(3) << " " \
             << fixed << setprecision(3) << O15x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O15y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O15z[m] << "\n";

        file << setw(3) << "O16" << setw(3) << " " \
             << fixed << setprecision(3) << O16x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O16y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O16z[m] << "\n";

        file << setw(3) << "O17" << setw(3) << " " \
             << fixed << setprecision(3) << O17x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O17y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O17z[m] << "\n";

        file << setw(3) << "O18" << setw(3) << " " \
             << fixed << setprecision(3) << O18x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O18y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O18z[m] << "\n";

        file << setw(3) << "O19" << setw(3) << " " \
             << fixed << setprecision(3) << O19x[m] << setw(3) << " " \
             << fixed << setprecision(3) << O19y[m] << setw(3) << " " \
             << fixed << setprecision(3) << O19z[m] << "\n";

    }

    file.close();

    cout << "program telah selesai";

    return 0;
}
