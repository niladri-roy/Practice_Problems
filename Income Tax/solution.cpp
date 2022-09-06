#include <bits/stdc++.h>
using namespace std;

double reverse(double totalIncome)
{
   double incomeTaxSlabRates = 0;

   if(totalIncome >= 0 && totalIncome < 250000)
   {
        incomeTaxSlabRates = 0;
   }
   else if (totalIncome >= 250000 && totalIncome < 500000)
   {
        incomeTaxSlabRates = (5 * totalIncome)/100;
   }
   else if (totalIncome >= 500000 && totalIncome < 750000)
   {
       incomeTaxSlabRates = (10 * totalIncome) / 100;
   }
   else if (totalIncome >= 750000 && totalIncome < 1000000)
   {
       incomeTaxSlabRates = (15 * totalIncome) / 100;
   }
   else if (totalIncome >= 1000000 && totalIncome < 1250000)
   {
       incomeTaxSlabRates = (20 * totalIncome) / 100;
   }
   else if (totalIncome >= 1250000 && totalIncome < 1500000)
   {
       incomeTaxSlabRates = (25 * totalIncome) / 100;
   }
   else
   {
       incomeTaxSlabRates = (30 * totalIncome) / 100;
   }
   cout << incomeTaxSlabRates << endl;

   double surchargeAbleTax = 0;
    if(totalIncome > 5000000 && totalIncome <= 10000000)
    {
        surchargeAbleTax = (10 * totalIncome)/100;
    }
    else if (totalIncome > 10000000 && totalIncome <= 20000000)
    {
        surchargeAbleTax = (15 * totalIncome) / 100;
    }
    else if (totalIncome > 20000000 && totalIncome <= 50000000)
    {
        surchargeAbleTax = (55 * totalIncome) / 100;
    }
    else if (totalIncome > 50000000)
    {
        surchargeAbleTax = (37 * totalIncome) / 100;
    }
    cout << surchargeAbleTax <<  endl;
    
    double totalTwo = incomeTaxSlabRates + surchargeAbleTax;
    double total = totalTwo + ((4 * totalTwo) / 100);
    return total;
}
int main()
{
    double number;
    cout << "Enter a number which need to be reversed: ";
    cin >> number;

    int ans = reverse(number);
    cout << "The number you have entered : " << number << endl;
    cout << "The number after reversed : " << ans << endl;
}