#include<cstdlib>
#include<ctime>
#include<iostream>


using namespace std;
int main () {
	srand (time(0));
	int daysUntilExpiration = rand() % 11;
	
	if(daysUntilExpiration <= 10){
	
	cout << "Your subscriptoin will expire soon. Renew now!"<<endl;
    }
    
	else if (daysUntilExpiration == 5){
	cout << "Your subscriptoin will expire soon. Renew now!"<< endl;
	cout << "Renew now and save 10%!"<<endl;
    }
    
   	else if (daysUntilExpiration == 1){
	cout << "Your subscriptoin will expire soon. Renew now!"<< endl;
	cout << "Renew now and save 20%!"<<endl;
    }
    
	else if (daysUntilExpiration == 0){
	cout << "Your subscription has expired"<< endl;
    }
    
	else (daysUntilExpiration !=10||daysUntilExpiration < 10);{
	cout << "You have an active Subscription"<< endl;
    }
	
	return 0;
}
	