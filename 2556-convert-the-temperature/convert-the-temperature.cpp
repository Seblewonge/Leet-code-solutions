class Solution {
public:
    vector<double> convertTemperature(double celsius) {
       
       double fahrenheit = (celsius*1.80)+32;
       double kelvin = celsius + 273.15;
        return {kelvin, fahrenheit};
    }
};