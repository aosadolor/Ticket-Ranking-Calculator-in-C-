//
//  main.cpp
//  OsadolorAssignment6
//
//  Created by Andrew Osadolor on 4/3/23.
//


#include <iostream>
#include <iomanip>
#include <sstream>


using namespace std;

// Global variables
int ticketsMC;
int ticketsMU;
int ticketsChels;
int ticketsArs;
int ticketsLiv;


//function prototypes

void getNumberTickets()

{
    
    int userInput;
    
    if ( int userInput < 0)
        cout<< "Invalid input. Enter a number greater than 0.";
        else
            return 0;
}

void findMost()
{
    int userInput;
    
    int result = userInput;
    
    string a+to_string(ticketsMU) = "Man United";
    string b+to_string(ticketsMC) = "Man City";
    string c+to_string(ticketsChels) = "Chelsea";
    string d+to_string(ticketsLiv) = "Liverpool";
    string e+to_string(ticketsArs) = "Arsenal";
    
  (
     if (result == ticketsMU)
     cout << a << "sold the most tickets";
     else if (result == ticketsMC)
     cout << b << "sold the most tickets";
     else if( result == ticketsChels)
     cout << c << "sold the most tickets";
     else if( result == ticketsLiv)
     cout << d << "sold the most tickets";
     else if( result == ticketsArs)
     cout << e << "sold the most tickets";
   
   
   
     )
    
    
    
}

int main()
{
    
        cout<<"This tool is used to find which teams below issued the most tickets last season"<<endl;
        
        cout<<"Enter the number of tickets for each team"<<endl;
        
        cout<<"Man United"<<endl;
        cin>> ticketsMU;
    getNumberTickets(ticketsMU);
      
        cout<<"Man City"<<endl;
        cin >> ticketsMC;
    getNumberTickets(ticketsMC);
       
        cout<<"Chelsea"<<endl;
        cin>> ticketsChels;
    getNumberTickets(ticketsChels);
      
        cout<<"Arsenal"<<endl;
        cin >> ticketsArs;
    getNumberTickets(ticketsArs);
      
        cout<<"Liverpool"<<endl;
        cin >> ticketsLiv;
    getNumerTickets(ticketsLiv);
      
                
       findMost(ticketsMU, ticketsMC, ticketsChels, ticketsArs, ticketsLiv);
       
       return 0;
        
        
    
    }
    
