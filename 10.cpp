#include <iostream>
#include <iomanip>
using namespace std;
int main(){
float K_Absolute_Zero = 0.00;
float K_Boiling_point_of_liquid_nitrogen = 77.40;
float K_Sublimation_points_of_dry_ice = 195.10;
float K_Intersection_of_Celsius_and_Fahrenheit_scales = 233.15;
float K_Normal_human_body_temperatur = 310.00;
float K_Water_boiling_point_at_1_atm = 373.1339;

float C_Absolute_Zero = K_Absolute_Zero - 273.15;
float C_Boiling_point_of_liquid_nitrogen = K_Boiling_point_of_liquid_nitrogen - 273.15;
float C_Sublimation_points_of_dry_ice = K_Sublimation_points_of_dry_ice - 273.15;
float C_Intersection_of_Celsius_and_Fahrenheit_scales = K_Intersection_of_Celsius_and_Fahrenheit_scales - 273.15;
float C_Normal_human_body_temperatur = K_Normal_human_body_temperatur - 273.15;
float C_Water_boiling_point_at_1_atm = K_Water_boiling_point_at_1_atm - 273.15;

float F_Absolute_Zero = (C_Absolute_Zero * 1.8) + 32;
float F_Boiling_point_of_liquid_nitrogen = (C_Boiling_point_of_liquid_nitrogen * 1.8) + 32;
float F_Sublimation_points_of_dry_ice = (C_Sublimation_points_of_dry_ice * 1.8) + 32;
float F_Intersection_of_Celsius_and_Fahrenheit_scales = (C_Intersection_of_Celsius_and_Fahrenheit_scales * 1.8) + 32;
float F_Normal_human_body_temperatur = (C_Normal_human_body_temperatur * 1.8) + 32;
float F_Water_boiling_point_at_1_atm = (C_Water_boiling_point_at_1_atm * 1.8) + 32;

cout << " conversion table of Kelvin temperature units and their significant values to Fahrenheit, and Celsius degrees" << endl;
cout << "====================================================================================================================================" << endl;
cout << left << setw(50) << "Significant Value" << setw(25) << "Kelvin:" << setw(25) << "Celsius:" << "Fahrenheit:" << endl;
cout << fixed << setprecision(2) << left << setw(50) << "Absolute Zero" << setw(25) << K_Absolute_Zero << setw(25) << C_Absolute_Zero << F_Absolute_Zero << endl;
cout << left << setw(50) << "Boiling point of liquid nitrogen" << setw(25) << K_Boiling_point_of_liquid_nitrogen << setw(25) << C_Boiling_point_of_liquid_nitrogen << F_Boiling_point_of_liquid_nitrogen << endl;
cout << left << setw(50) << "Sublimation points of dry ice" << setw(25) << K_Sublimation_points_of_dry_ice << setw(25) << C_Sublimation_points_of_dry_ice << F_Sublimation_points_of_dry_ice << endl;
cout << left << setw(50) << "Intersection of Celsius and Fahrenheit scales" << setw(25) << K_Intersection_of_Celsius_and_Fahrenheit_scales << setw(25) << C_Intersection_of_Celsius_and_Fahrenheit_scales
 << F_Intersection_of_Celsius_and_Fahrenheit_scales << endl;
cout << left << setw(50) << "Normal human body temperature" << setw(25) << K_Normal_human_body_temperatur << setw(25) << C_Normal_human_body_temperatur << F_Normal_human_body_temperatur << endl;
cout << left << setw(50) << "Water's boiling point at 1 atm" << setw(25) << K_Water_boiling_point_at_1_atm << setw(25) << C_Water_boiling_point_at_1_atm << F_Water_boiling_point_at_1_atm << endl;
cout<<"====================================================================================================================================="<<endl;
  
return 0;
}