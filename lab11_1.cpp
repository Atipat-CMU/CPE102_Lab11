#include<iostream>
using namespace std;

int main(){
	char grade;
	int sum = 0;
	int count[5] = {};
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << sum + 1 << "]: ";
		cin >> grade;
		if(grade == '0'){
			break;
		}

		sum++;

		if(grade == 'A'){
			count[0]++;
		}else if(grade == 'B'){
			count[1]++;
		}else if(grade == 'C'){
			count[2]++;
		}else if(grade == 'D'){
			count[3]++;
		}else if(grade == 'F'){
			count[4]++;
		}else{
			cout << "Wrong input. Please input again.\n";
			sum--;
		}
	}while(true);
	
	
	cout << "In total " << sum << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];
	
	return 0;
}
