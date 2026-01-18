#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    // Variables ng customer details
    string pay, code, First, Mid, Last, Birth, Occu, Add, Email, date, time;
    int Age;
    string Cel, confirm;
    float total = 0;
    string receipt = "";
    char P, E, premium, choice, order;
    long long card;

    // Welcoming message
    cout << "\033[1;33m\n\t\t\t\t\t               ================================================\033[0m";
    cout << "\033[1;33m\n\t\t\t\t\t                 Welcome to Wild Big Cats Research Services\033[0m";
    cout << "\033[1;33m\n\t\t\t\t\t               ================================================\033[0m";
    
    

    // Creating Account Details
    cout << "\033[1;34m\n   ===========================\033[0m";
    cout << "\033[1;34m\n     Create an Account First\034";
    cout << "\033[1;34m\n   ===========================\033[0m\n";
    cout << "\nFirst Name: ";
    getline(cin, First);
    cout << "Middle Initial: ";
    getline(cin, Mid);
    cout << "Last Name: ";
    getline(cin, Last);
    cout << "Age: ";
    cin >> Age;
    cin.ignore();
    cout << "Date of Birth: ";
    getline(cin, Birth);
    cout << "Occupation: ";
    getline(cin, Occu);
    cout << "Current Address: ";
    getline(cin, Add);
    cout << "Cellphone No.: ";
    getline(cin, Cel);
    cout << "Email Address: ";
    getline(cin, Email);

    system("cls");
    
    // Proceed to Services
    cout << "\n                                                 You can now proceed to our services! ";
    cout << "\n                                                     Type P to Proceed, E to Exit: ";
    cin>>order;
    

    if (order == 'E' || order == 'e'){
    cout << "Thank you for visiting our office.";
    return 0;
   } 
    else if (order == 'P' || order == 'p'){
    cin.ignore();
   } 
   else {
    cout << "Invalid Choice. Exiting Program.";
    return 0;
   }

	
    cin.ignore();
    
    system ("cls");
     
    // List of Services
    cout << "\nOur Main Services Include:\n";
    cout << "\nA1 - Data Collection and Reporting PHP 1000\n";
    cout << "\033[1;33m~Gather and Organize Animal data\n\n\033[0m";
    
    cout << "A2 - Behavioral Modeling PHP 650\n";
    cout << "\033[1;33m~Analyze and Predict Animal Behaviors\n\n\033[0m";
    
    cout << "A3 - Population Analytics PHP 880\n";
    cout << "\033[1;33m~Study Population Trends and Dynamics\n\n\033[0m";
    
    cout << "A4 - Data Visualization PHP 1150\n";
    cout << "\033[1;33m~Turn collected data into clear charts and graphics\n\n\033[0m";
    
    cout << "A5 - Interactive Reports PHP 950\n";
    cout << "\033[1;33m~Explore findings through interactive summaries\n\n\033[0m";
    
    cout << "A6 - Species Identification Report PHP 850\n";
    cout << "\033[1;33m~Identify and document species accurately\n\n\033[0m";
    
    cout << "A7 - Habitat Range Analysis PHP 900\n";
    cout << "\033[1;33m~Examine map and animal habitats\n\n\033[0m";
    
    cout << "A8 - Nocturnal Activity Evaluation PHP 1100\n";
    cout << "\033[1;33m~Track and study nighttime behaviors\n\n\033[0m";
    
    cout << "A9 - Endangerment Risk Assessment PHP 1250\n";
    cout << "\033[1;33m~Evaluate threats to species survival\n\n\033[0m";
    
    cout << "A10 - Genetic Trait Comparison PHP 1400\n";
    cout << "\033[1;33m~Compare and analyze genetic characteristics\n\n\033[0m";

    // Service selection
    cout << "\nEnter service codes (type 'done' to finish):\n";
    while (true) {
        cin >> code;

        if (code == "done") {
            break;
        }
        else if (code == "A1") {
            total += 1000;
            receipt += "Data Collection and Reporting - PHP 1000\n";
        }
        else if (code == "A2") {
            total += 650;
            receipt += "Behavioral Modeling - PHP 650\n";
        }
        else if (code == "A3") {
            total += 880;
            receipt += "Population Analytics - PHP 880\n";
        }
        else if (code == "A4") {
            total += 1150;
            receipt += "Data Visualization - PHP 1150\n";
        }
        else if (code == "A5") {
            total += 950;
            receipt += "Interactive Reports - PHP 950\n";
        }
        else if (code == "A6") {
            total += 850;
            receipt += "Species Identification Report - PHP 850\n";
        }
        else if (code == "A7") {
            total += 900;
            receipt += "Habitat Range Analysis - PHP 900\n";
        }
        else if (code == "A8") {
            total += 1100;
            receipt += "Nocturnal Activity Evaluation - PHP 1100\n";
        }
        else if (code == "A9") {
            total += 1250;
            receipt += "Endangerment Risk Assessment - PHP 1250\n";
        }
        else if (code == "A10") {
            total += 1400;
            receipt += "Genetic Trait Comparison - PHP 1400\n";
        }
        else {
            cout << "Invalid Code, Please Try Again\n";
        }
    }

    // Order Confirmation
    cout << "\nWould you like to confirm your service orders? (Y/N): ";
    cin >> confirm;
    if (confirm != "Y" && confirm != "y") {
        cout << "\nOrder Cancelled. Thank you for visiting.\n";
        return 0;
    }
    

    // Availing Premium Account
    cout << "\nDo you want to be a Premium Customer? (Includes 10% Discount) (Y/N): ";
    cin >> premium;
    system("cls") ;
    if (premium == 'Y' || premium == 'y') {
        cout << "\nYou are now a Premium Customer for a year! 10% discount applied.\n";
        total -= total * 0.10;
    } else {
        cout << "No Problem :)\n";
    }
    
    //Appointment
    
    cout<<"\nDo you want to set an appointment or walk-in for your desired services? (A/W) ";
    cin>>choice;
    cin.ignore();
    
    if (choice == 'A' || choice == 'a'){
    	cout<<"\nEnter preferred Date (MM/DD/YYYY)\n";
    	getline (cin, date);
    	
    	cout<<"\nEnter preferred Time\n";
    	getline (cin, time);
    	
    	receipt += "\nAppointment Type: Scheduled\n";
        receipt += "Appointment Date: " + date + "\n";
        receipt += "Appointment Time: " + time + "\n";
	} 
	else if (choice == 'W' || choice == 'w'){
	receipt+= "\nAppointment Type: Walk-In\n ";
	cout<<"You may proceed directly to our office within working hours";
	}
	else {
		receipt+= "\nAppointment not specified";
		cout<<"\nInvalid Choice. No appointment scheduled.";
	}

    system("cls");
	
	// Total
    
    cout << "\n\n===== Order Receipt =====\n\n" << receipt;
    cout << "\033[1;33m\nTotal Amount\033[0m: PHP" <<  total << endl;
    
    // Payment
    cout << "\nSelect payment method (Cash, Credit, Debit, E-Wallet): \n";
    cin >> pay;

    if (pay == "Credit" || pay == "Debit" || pay == "E-Wallet") {
        cout << "Enter your card number: ";
        cin >> card;
    } 
    else if (pay == "Cash" || pay == "cash") {
        cout << "Please proceed to cash payment window.\n";
    } 
    else {
        cout << "Invalid payment method. Defaulting to Cash.\n";
        pay = "Cash";
    }
    
    system("cls");
    
    // Receipt saved to File Explorer
    cout << "\nProcessing payment via " << pay << "...\n";
    cout << "\nPayment successful! A confirmation letter has been sent to " << Email << ".\n";
    cout << "\nThank you for purchasing and visiting our service!\n";
    
   ofstream user;
   ofstream comp;
   
   user.open("receipt.txt");
   comp.open("comp.txt",ios::app);
   
    
    
    user << "===== Wild Big Cats Research Services =====\n";
    user << "Customer: " << First << " " << Last << endl;
    user << "Email: " << Email << endl;
    user << "====================";
    user << "\nOrdered Services:\n" << receipt;
    user << "====================";
    user << "\nTotal Amount: PHP " << total << endl;
    user << "Payment Method: " << pay << endl;
    user << "Premium Customer: " << ((premium == 'y' || premium == 'Y') ? "Yes" : "No") << endl;
    user << "======================================================================";
    
    comp << "\n===== Wild Big Cats Research Services =====\n";
    comp << "Customer: " << First << " " << Last << endl;
    comp << "Email: " << Email << endl;
    comp << "====================";
    comp << "\nOrdered Services:\n" << receipt;
    comp << "====================";
    comp << "\nTotal Amount: PHP " << total << endl;
    comp << "Payment Method: " << pay << endl;
    comp << "Premium Customer: "<< ((premium == 'y' || premium == 'Y') ? "Yes" : "No") << endl;
    comp << "\n===================================================================";
    
    
    cout << "\nYour receipt has been saved as 'receipt.txt'.\n";

    return 0;
}

