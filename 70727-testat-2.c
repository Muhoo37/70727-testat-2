//
//  main.c
//  70727-testat-2
//
//  Created by Muhammed Demir on 28.05.20.
//  Copyright © 2019 Muhammed Demir. All rights reserved.
//

#include <stdio.h>

int main () {
    
    double bruttogehalt ;
    int verheiratet , kinder ;
    scanf("%lf%d%d", &bruttogehalt, &verheiratet, &kinder);
    
    double Kindersteuer, Abzuege, Steuersatz, Heiratstatus, abStr;
   
   const double steuersatz1 = 0.12;
   const double steuersatz2 = 0.15;
   const double steuersatz3 = 0.20;
   const double steuersatz4 = 0.25;
    
   
    
    
    //Steuersatz nach BruttoGehalt
     if (bruttogehalt<=12000) {
        Steuersatz = steuersatz1;
    } if (bruttogehalt>12000 && bruttogehalt <=20000) {
        Steuersatz = steuersatz2;
    } if (bruttogehalt>20000 && bruttogehalt <=30000) {
        Steuersatz = steuersatz3;
    } if (bruttogehalt>30000) {
        Steuersatz = steuersatz4;
    } if (bruttogehalt<0) {
        printf("Eingabefehler\n");
        return 0;
    }
   
        
    //Verheiratet oder ledig
    if (verheiratet == 1) {
       Heiratstatus=0.2;
    if (verheiratet == 0)
        Heiratstatus = 0;
    } else {
        printf("Eingabefehler\n");
        return 0;
    }
   
   
    // Kinder
    
    if(kinder >0) {
    Kindersteuer = kinder * 0.1;
    }   else {
        printf("Eingabefehler\n");
        return 0;
    }
    
    
    Abzuege = 1.0 - Heiratstatus - Kindersteuer;
    
    if(Abzuege >0) {
        abStr = (bruttogehalt * Steuersatz) * Abzuege;
    } if (Abzuege <=0) {
        abStr = (bruttogehalt * Steuersatz);
    }
    
    
    
    printf("%.2lf\n", abStr);
    

    return 0;
}


