#include <iostream>
#include <cstdio>
#include <ctime>
#include <vector>
using namespace std;

//Prototypes...
vector <int> addRandomNumbers(int,vector <int>);
void printVector( vector <int>, char );
vector <int> searchWithinVector(int, vector <int>);
void replaceWith(vector <int> &, vector <int>, int);

int main()
{
        srand(time(NULL)); //only do once per program run

        int amount;
        int search;
        int value;
        vector <int> list;
        vector <int> places;

        cout<<"How many numbers should we make? ";
        cin>>amount;
        // (RED) create a list of random number the size of AMOUNT in list

        cout<<"List is initially: ";
        // (ORANGE) display the numbers in LIST with spaces ( ) between each element

        cout<<"What number should we search for? ";
        cin>>search;

        do
        {
            // (YELLOW) find each index where SEARCH is found in LIST and store the locations in PLACES

        }while( places.size() > 0 );

        cout<<search<<" found at locations: ";
        // (GREEN) display the numbers in PLACES with a comma (,) between each element

        cout<<"Replace with value: ";
        cin>>value;
        // (BLUE) change the value of each element at each index in PLACES within LIST to the value VALUE
        
        cout<<"Replaced list has: ";
        // (INDIGO) display the numbers in LIST with spaces ( ) between each element
        
        // (VIOLET) add 5 more random numbers to LIST

        cout<<"Updated list with more random numbers: ";
        // (GREY) display the numbers in LIST with hyphens (-) between each element         
        
        return 0;
}

vector <int> addRandomNumbers(int howMany, vector <int> original)
{
        for(int i=0; i<howMany; i++)
        {
                int randomNumber = rand() % 10;
                original.push_back(randomNumber);
        }
        return original;
}

void printVector( vector <int> printing, char deliminator )
{
        for(int i=0; i<printing.size(); i++)
        {
                cout<<printing[i];
                if( i < printing.size()-1 )
                {
                        cout<<deliminator;
                }
                else
                {
                        cout<<endl;
                }
        }
}

vector <int> searchWithinVector(int searchFor, vector <int> within)
{
    vector <int> locations;
    for(int i=0; i<within.size(); i++)
    {
        if( searchFor == within[i] )
        {
            locations.push_back(i);
        }
    }
    return locations;
}

void replaceWith(vector <int> & values, vector <int> locations, int newValue)
{
    for(int i=0; i < locations.size(); i++)
    {
        if( locations[i] >=0 && locations[i] < values.size() )
        {
            values[ locations[i] ] = newValue;
        }
    }
}
