// Cylinder Volume = π r² h

#include <stdio.h>
#include <math.h>

int main () {

float Al_Sqm = 0.01; // 100$/m2 = 0.01$/cm2
float Pi = 3.14159;
float diameter, height, price;
  
printf("Please enter the diameter of the aluminium can in cm: ");
scanf("%f", &diameter);

printf("\nPlease enter the height of the aluminium can in cm: ");
scanf("%f", &height);

float radius = diameter/2;
float volume = Pi * pow(radius, 2) * height; // CVolume = πr²h

printf("\nCylinder Volume %.2f^3", volume);

price = volume*Al_Sqm;
printf("\nThe cost of aluminum per sq cm is: $%.2f", Al_Sqm);
printf("\n\033[1mTherefore the total price is: $%.2f \033[0m", price);
}
