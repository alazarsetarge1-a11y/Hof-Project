#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double div(double numA, int numB);
void hof(){
    cout << "is a First Ballot Hall of Famer!" << endl;
}
int main() {
    double yardsSeason[30];
    int numP = 1;
    int num = 0;
    double userP;
    string season;
    double sum = 0;
    string name;
    int proBowls;
    int superBowls;
    int opoys;

    cout << "Will this running back enter the Hall of Fame?" << endl;
    cout << "Enter Name: ";
    getline(cin, name);

    while(num < 30){
            cout << "\n" << "Enter total yards in season " << numP << ": ";
            cin >> userP;
            yardsSeason[num] = userP;
            sum += userP;
            num++;
            numP++;
        
            cout << "\n" << "Did " << name << " play another season? ";
            cin >> season;
        
            
            if (season != "Yes" && season != "yes" && season != "Y" && season != "y"){
                break;
            }
        
    }

    cout << "\nHow many Pro Bowls does " << name << " have? ";
    cin >> proBowls;

    cout << "\nHow many SuperBowls does " << name << " have? ";
    cin >> superBowls;

    cout << "\nHow many OPOPY's does " << name << " have? ";
    cin >> opoys;

    if (proBowls>=5 && sum>= 10000 && superBowls>=1 || proBowls >= 8 && sum>=12000 && superBowls >=0 || proBowls>=3 && sum >= 7500 && superBowls >= 0 && opoys>=1){
        cout << "\n" << name << " ";
        hof();
    }
    

    int average = div(sum,num);

    cout << "\n" << name << "'s " << "Career Stats" << endl;
    cout << "Total Yards: " << sum << endl;
    cout << "Average Yards Per Season: " << average << endl;
    cout << "Yards Per Game: " << fixed << setprecision(3) << (average/16) << endl;
    cout << "SuperBowls: " << superBowls << endl;
    cout << "Pro Bowls: " << proBowls << endl;
    cout << "OPOY's: " << opoys << endl;

    return 0;
}

double div(double numA, int numB){
    return numA / numB;
}