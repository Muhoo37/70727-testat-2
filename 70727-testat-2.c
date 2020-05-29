//
//  main.c
//  70727-testat-2
//
//  Created by Muhammed Demir on 28.05.20.
//  Copyright © 2019 Muhammed Demir. All rights reserved.
//

#include <stdio.h>

int main() {
    
    double bruttogehalt;
    int verheiratet, kinder;
    scanf("%lf%d%d", &bruttogehalt, &verheiratet, &kinder);
    
    double kinderSteuer, abzuege, steuersatz, heiratsSteuer, abStr;
    
    const double steuersatz1 = 0.12;
    const double steuersatz2 = 0.15;
    const double steuersatz3 = 0.20;
    const double steuersatz4 = 0.25;
    
    //steuersatz nach BruttoGehalt
    if (bruttogehalt <= 12000)
    {
        steuersatz = steuersatz1;
    } else if (bruttogehalt > 12000 && bruttogehalt <= 20000)
    {
        steuersatz = steuersatz2;
    } else if (bruttogehalt > 20000 && bruttogehalt <= 30000)
    {
        steuersatz = steuersatz3;
    } else if (bruttogehalt > 30000)
    {
        steuersatz = steuersatz4;
    } else
    {
        printf("Eingabefehler\n");
        return 0;
    }
    
    //Verheiratet oder ledig
    if (verheiratet == 1) {
        heiratsSteuer = 0.2;
    } else if (verheiratet == 0)
    {
        heiratsSteuer = 0;
    } else
        {
        printf("Eingabefehler\n");
        return 1;
    }
    
    // Kinder Steuer berechnen, wenn wert kleiner als 0 eingegeben wird return 1 (Error)
    if (kinder >= 0)
    {
        kinderSteuer = kinder * 0.1;
    } else
        {
        printf("Eingabefehler\n");
        return 1;
    }
    
    abzuege = 1.0 - heiratsSteuer - kinderSteuer;
    
    if (abzuege > 0) {
        abStr = (bruttogehalt * steuersatz) * abzuege;
    } else
        {
            abStr = (bruttogehalt * steuersatz);
        }
    printf("%.2lf\n", abStr);
    
    return 0;
}

