//LAB 3D - NURUNNAJWA BT ZULKIFLI A21EC0121

/*Write a program that store the populations of
12 countries. Define 2 arrays that may be used
in parallel to store the names of the countries
and their populations. Write a loop that uses
these arrays to print each country’s name and
its population.*/

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{  const int SIZE = 12;
   string country[SIZE]={"Malaysia","Iraq","Singapore","Brunei","Syria","Jordan",// hold countries name
                         "Saudi Arabia","Japan","Tukey","South Korea","Azerbaijan","Lebanon"};
   double population[SIZE]= {32.7,41.2,5.8,4.4,18.2,10.2,
                             35.3,126,85,51.3,10.2,6.7};//hold population of each country

   cout<<"This program display 12 countries and it population in million.\n"<<endl;

   for (int count = 0; count < 12; count++)
   {
       cout<<setw(13)<<country[count]<<"\t: ";
       cout<<population[count]<<endl;
   }


    return 0;
}
