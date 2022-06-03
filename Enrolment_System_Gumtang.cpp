# include <iostream>
#include <windows.h>
using namespace std;

void header(){
cout<<"\n\n\n";
cout<<"\t\t\t\t\t ________                                __  __                                      __     "<<endl;
cout<<"\t\t\t\t\t/        |                              /  |/  |                                    /  |    "<<endl;
cout<<"\t\t\t\t\t$$$$$$$$/  _______    ______    ______  $$ |$$ | _____  ____    ______   _______   _$$ |_   "<<endl;
cout<<"\t\t\t\t\t$$ |__    /       \  /      \  /      \ $$ |$$ |/     \/    \  /      \ /       \ / $$   |  "<<endl;
cout<<"\t\t\t\t\t$$    |   $$$$$$$  |/$$$$$$  |/$$$$$$  |$$ |$$ |$$$$$$ $$$$  |/$$$$$$  |$$$$$$$  |$$$$$$/   "<<endl;
cout<<"\t\t\t\t\t$$$$$/    $$ |  $$ |$$ |  $$/ $$ |  $$ |$$ |$$ |$$ | $$ | $$ |$$    $$ |$$ |  $$ |  $$ | __ "<<endl;
cout<<"\t\t\t\t\t$$ |_____ $$ |  $$ |$$ |      $$ \__$$ |$$ |$$ |$$ | $$ | $$ |$$$$$$$$/ $$ |  $$ |  $$ |/  |"<<endl;
cout<<"\t\t\t\t\t$$       |$$ |  $$ |$$ |      $$    $$/ $$ |$$ |$$ | $$ | $$ |$$       |$$ |  $$ |  $$  $$/ "<<endl;
cout<<"\t\t\t\t\t$$$$$$$$/ $$/   $$/ $$/        $$$$$$/  $$/ $$/ $$/  $$/  $$/  $$$$$$$/ $$/   $$/    $$$$/  "<<endl;

cout<<"\t\t\t\t\t  ______                         __                             "<<endl;
cout<<"\t\t\t\t\t /      \                       /  |                            "<<endl;
cout<<"\t\t\t\t\t/$$$$$$  | __    __   _______  _$$ |_     ______   _____  ____  "<<endl;
cout<<"\t\t\t\t\t$$ \__$$/ /  |  /  | /       |/ $$   |   /      \ /     \/    \ "<<endl;
cout<<"\t\t\t\t\t$$      \ $$ |  $$ |/$$$$$$$/ $$$$$$/   /$$$$$$  |$$$$$$ $$$$  |"<<endl;
cout<<"\t\t\t\t\t $$$$$$  |$$ |  $$ |$$      \   $$ | __ $$    $$ |$$ | $$ | $$ |"<<endl;
cout<<"\t\t\t\t\t/  \__$$ |$$ \__$$ | $$$$$$  |  $$ |/  |$$$$$$$$/ $$ | $$ | $$ |"<<endl;
cout<<"\t\t\t\t\t$$    $$/ $$    $$ |/     $$/   $$  $$/ $$       |$$ | $$ | $$ |"<<endl;
cout<<"\t\t\t\t\t $$$$$$/   $$$$$$$ |$$$$$$$/     $$$$/   $$$$$$$/ $$/  $$/  $$/ "<<endl;
cout<<"\t\t\t\t\t          /  \__$$ |                                            "<<endl;
cout<<"\t\t\t\t\t          $$    $$/                                             "<<endl;
cout<<"\t\t\t\t\t           $$$$$$/                                              "<<endl;

cout<<"\n\n\t\t\t\t\t\t\t\t  Program by: Edmar Jan B. Gumtang                             ";

cout<<"\n\n\n";
	cout<<"\t\t\t\t\t\t  Generating Database: ";
	char x = 219;
	
	for(int i=0; i<35; i++){
		cout<<x;
		if(i<10){
			Sleep(300);	
		}
		if(i>=10 && i<20){
			Sleep(150);
		}
		if(i>=10){
			Sleep(25);
		}
		
	}
	
	cout<<"\n\n\t\t\t\t\t\t\t\t ";
	system("pause");
	
	system("CLS");
}

void load(){
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t Loading Database: ";
	char x = 219;
	
	for(int i=0; i<35; i++){
		cout<<x;
		if(i<10){
			Sleep(300);	
		}
		if(i>=10 && i<20){
			Sleep(150);
		}
		if(i>=10){
			Sleep(25);
		}
		
	}
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t Load Successfully!"<<endl;
}

void loadPayment(){
	cout<<"\n\n";
	cout<<"\t\t\t\t Payment Processing ";
	char x = 219;
	
	for(int i=0; i<35; i++){
		cout<<x;
		if(i<10){
			Sleep(300);	
		}
		if(i>=10 && i<20){
			Sleep(150);
		}
		if(i>=10){
			Sleep(25);
		}
		
	}
	cout<<"\n\n";
	
}

void paymentError(){
	cout<<"\t\t\t\t\t Payment Unsuccessfully!"<<endl;
	cout<<"\n\nReceive Money Is Not Enough. Please Try Again.\n";
}

void studentInfo(){
	
	string firstName, lastName, midName, gender, address, fatherName, fatherOcc, motherName, motherOcc;
    float age, contactNum;
    
    
	cout<<endl;
	cout<<"STUDENT INFORMATION\n\n";
	cout<<"First Name:";
	getline(cin,firstName);
	cout<<"Last Name:";
	getline(cin,lastName);
	cout<<"Middle Initial:";
	cin>>midName;
	cin.ignore();
	cout<<"Gender:";
	getline(cin,gender);
	cout<<"Age:";
	cin>>age;
	cin.ignore();
	cout<<"Address:";
	getline(cin,address);
	cout<<"Contact #:";
	cin>>contactNum;
	cin.ignore();
	cout<<"Fathers Name:";
	getline(cin,fatherName);
	cout<<"Occupation:";
	getline(cin,fatherOcc);
	cout<<"Mothers Name:";
	getline(cin,motherName);
	cout<<"Occupation:";
	getline(cin,motherOcc);
	}

//______________________________________________________________________________


void classyear()
{
	cout<<"\n\nYEAR LEVEL\n";
	cout<<"[1] 1st Year\n";
	cout<<"[2] 2nd Year\n";
	cout<<"[3] 3rd Year\n";
	cout<<"[4] 4th Year\n\n";
}

void semester()
{
	cout<<"\n\nSEMESTER\n";
	cout<<"[1] First Semester\n";
	cout<<"[2] Summer\n";
	cout<<"[3] Second Semester\n";
}

void error()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t Sorry not available."<<endl;
}
//______________________________________________________________________________

void payment()
{
	int fee;
	float receive,change, paying, balance;
	cout<<"\n\n\n";
	cout<<"ASSESSMENT OF FEES\n";
	cout<<"Tuition Fee:\n";
	cout<<"\tTuition Fee 23x100/unit						2,300			2,300\n";
	cout<<"Laboratory Fees:\n";
	cout<<"\tComputer Laboratory 2x450/subjects				  900			  900\n";
	cout<<"Miscellaneous Fees:\n";
	cout<<"\tMiscellaneous Fees						  895			  895\n";
	cout<<"Total Assessment:                                                4,095.00\n";
	cout<<"\n";
	cout<<"Mode of Payment\n";
	cout<<"______________________________________\n";
	cout<<"       Mode of Payment   Amout of Fee\n";
	cout<<"[1]    Cash               4,095\n";
	cout<<"[2]    2 Payments         3,095\n";
	cout<<"[3]    3 Payments         2,095\n";
	cout<<"[4]    4 Payments         1,095\n";
	cout<<"[5]    Custom         \n";
	cout<<"______________________________________\n\n";
	
	cout<<"Choose mode of payments:";
	cin>>fee;
				
	switch(fee){
		case 1: {
			cout<<"Enter amount: ";
			cin>>receive;
			change= receive-4095;
			balance = 4095 - 4095;
			loadPayment();
			if(receive<4095){
				paymentError();
			}
			else{
				cout<<"\t\t\t\t\t Payment Successfully!"<<endl;
				cout<<"\n";
				cout<<"Amount receive is: "<<receive<<"\n";
				cout<<"Your change is:    "<<change<<"\n\n";
				cout<<"Your current balance now is:    "<<balance<<"\n\n";
				cout<<"\n\n";
				cout<<"======================================================================================================================================================\n";
				cout<<"\t\t\t\t\t You're Now Successfuly Enrolled! Congratulations!\n";
				cout<<"======================================================================================================================================================\n";
			}
			
			break;}
		case 2: {
			cout<<"Enter amount: ";
			cin>>receive;
			change= receive-3095;
			balance = 4095 - 3095;
			loadPayment();
			if(receive<3095){
				paymentError();
			}
			else{
				cout<<"\t\t\t\t\t Payment Successfully!"<<endl;
				cout<<"\n";
				cout<<"Amount receive is: "<<receive<<"\n";
				cout<<"Your change is:    "<<change<<"\n\n";
				cout<<"Your current balance now is:    "<<balance<<"\n\n";
				cout<<"\n\n";
				cout<<"======================================================================================================================================================\n";
				cout<<"\t\t\t\t\t You're Now Successfuly Enrolled! Congratulations!\n";
				cout<<"======================================================================================================================================================\n";
			}
			break;}
		case 3: {
			cout<<"Enter amount: ";
			cin>>receive;
			change= receive-2095;
			balance = 4095 - 2095;
			loadPayment();
			if(receive<2095){
				paymentError();
			}
			else{
				cout<<"\t\t\t\t\t Payment Successfully!"<<endl;
				cout<<"\n";
				cout<<"Amount receive is: "<<receive<<"\n";
				cout<<"Your change is:    "<<change<<"\n\n";
				cout<<"Your current balance now is:    "<<balance<<"\n\n";
				cout<<"\n\n";
				cout<<"======================================================================================================================================================\n";
				cout<<"\t\t\t\t\t You're Now Successfuly Enrolled! Congratulations!\n";
				cout<<"======================================================================================================================================================\n";
			}
			break;}
		case 4: {
			cout<<"Enter amount: ";
			cin>>receive;
			change= receive-1095;
			balance = 4095 - 1095;
			loadPayment();
			if(receive<1095){
				paymentError();
			}
			else{
				cout<<"\t\t\t\t\t Payment Successfully!"<<endl;
				cout<<"\n";
				cout<<"Amount receive is: "<<receive<<"\n";
				cout<<"Your change is:    "<<change<<"\n\n";
				cout<<"Your current balance now is:    "<<balance<<"\n\n";
				cout<<"\n\n";
				cout<<"======================================================================================================================================================\n";
				cout<<"\t\t\t\t\t You're Now Successfuly Enrolled! Congratulations!\n";
				cout<<"======================================================================================================================================================\n";
			}
			break;}
			case 5: {
			cout<<"Enter amount you willing to pay for: ";
			cin>>paying;
			if(paying>4095){
				cout<<"Your only current balance is: 4,095\n\n";
				cout<<"Please Try Again...";
			}
			else{
				cout<<"Enter amount: ";
				cin>>receive;
				change = receive-paying;
				loadPayment();
				if(receive<paying){
					paymentError();
				}
				else{
					cout<<"\t\t\t\t\t Payment Successfully!"<<endl;
					cout<<"\n";
					cout<<"Amount receive is: "<<receive<<"\n";
					cout<<"Your change is:    "<<change<<"\n\n";
					cout<<"Your current balance now is:    "<<4095-paying<<"\n\n";
					cout<<"\n\n";
					cout<<"======================================================================================================================================================\n";
					cout<<"\t\t\t\t\t You're Now Successfuly Enrolled! Congratulations!\n";
					cout<<"======================================================================================================================================================\n";
				}
			}
			break;}
		default: {
			cout<<"Invalid Input\n";}
	}
	
}

//______________________________________________________________________________


void BSCS()
{
	int year, sem;
	cout<<"BSCS";
	classyear();
	cout<<"Choose year level:";
	cin>>year;
	
	if (year==1){
		cout<<"                                                   BACHELOR OF SCIENCE IN COMPUTER SCIENCE\n";
		cout<<"                                                   with Specialization Track in Data Mining\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2021-2022)\n\n\n\n";
		cout<<"                                                                First Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
			cout<<"   1st Semester\n";
			cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
			cout<<"                                                                                                                     Lec    Lab\n";
			cout<<"\n\n";
			cout<<"      CS Inst 1       Climate Change and Disaster Risk Management                                             2       2                   None\n";
			cout<<"      GEC 3           Mathematics in the Modern World                                                         3       3                   None\n";
			cout<<"      GEC 4           Purposive Communication                                                                 3       3                   None\n";
			cout<<"      GE Elec CS 1    Health and Wellness Science                                                             3       3                   None\n";
			cout<<"      GE Elec CS 2    Gender and Society                                                                      3       3                   None\n";
			cout<<"      CS 111          Introduction to Computing                                                               3       2      1            None\n";
			cout<<"      CS 112          Fundamentals of Programming                                                             3       2      1            None\n";
			cout<<"      PE 1     	      Physical Activity Towards Health Fitness I (Movement Enhancement)                       2       2                 None\n";
			cout<<"      NSTP 1          CWTS/ LTS/MS  1                                                                         (3)       3                   None\n";
			cout<<"                                                                                                Total Units   25\n\n\n";
				payment();
		}
		else if(sem==3){
			cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 1           Understanding the Self                                                                  3       3                   None\n";
		cout<<"      GEC 2           Readings in Philippine History                                                          3       3                   None\n";
		cout<<"      GEC 5           Art Appreciation                                                                        3       3                   None\n";
		cout<<"      GE Elec CS 3    Foreign Language 1                                                                      3       3                   None\n";
		cout<<"      CS 121          Discrete Structures 1                                                                   3       3                   GEC 3\n";
		cout<<"      CS 122          Intermediate Programming                                                                3       2        1          CS 112\n";
		cout<<"      PE 2            Physical Activity Towards Health Fitness II(Fitness Exercise)                           2       2                   PE 1\n";
		cout<<"      NSTP 2     	 CWTS/ LTS/MS 2                                                                          3       3                   NSTP 1\n";
		cout<<"                                                                                                Total Units   23\n\n\n";
			payment();
		}
		
		else {
			error();
		}
		
		
	}
		else if (year==2){
		cout<<"                                                   BACHELOR OF SCIENCE IN COMPUTER SCIENCE\n";
		cout<<"                                                   with Specialization Track in Data Mining\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2021-2022)\n\n\n\n";
		cout<<"                                                                Second Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
			cout<<"   1st Semester\n";
			cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
			cout<<"                                                                                                                     Lec    Lab\n";
			cout<<"\n\n";
			cout<<"      GEC 6           Science, Technology and Society                                                         3       3                   None\n";
			cout<<"      GEC 8           The Contemporary World                                                                  3       3                   None\n";
			cout<<"      CS Inst 2       Creative and Critical Thinking                                                          2       1      1            None\n";
			cout<<"      CS 211          Discrete Structures 2                                                                   3       3                   CS 1 21\n";
			cout<<"      CS 212          Object-Oriented Programming                                                             3       2      1            CS 122\n";
			cout<<"      CS 213          Data Structures and Algorithms                                                          3       2      1            CS  1 22\n";
			cout<<"      CS 214          Calculus with Analytic Geometry                                                         3       3                   2nd Year Standing\n";
			cout<<"      CS Elec 1     	 CS Elective 1                                                                           3       2      1            2nd year Standing\n";
			cout<<"      PE 3            Physical Activity Towards Health Fitness III                                            2       2                   PE 1, PE 2\n";
			cout<<"                                                                                                Total Units   25\n\n\n";
				payment();
		}
		else if(sem==3){
			cout<<"   2nd Semester\n";
			cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
			cout<<"                                                                                                                     Lec    Lab\n";
			cout<<"\n\n";
			cout<<"      GEC 7           Ethics                                                                                  3       3                   None\n";
			cout<<"      GEC 9           Life and Works of Rizal                                                                 3       3                   None\n";
			cout<<"      CS GE Elec 1    The Entrepreneurial Mind                                                                3       3                   CS Inst 2\n";
			cout<<"      CS GE Elec 4    Technical Writing                                                                       3       3                   None\n";
			cout<<"      CS 221          Algorithms and Complexity                                                               3       3                   CS 213, CS 211\n";
			cout<<"      CS 222          Information Management                                                                  3       2                   CS 1 22\n";
			cout<<"      CS DM 1         Statistical methods for Data Analysis and Inference                                     3       2        1          2nd Year Standing\n";
			cout<<"      CS DM 2     	 Data Preparation and Analysis                                                           3       2        1          2nd Year Standing\n";
			cout<<"      PE4   	         Physical Activity Towards Health Fitness IV                                             2       2        1          PE 1, PE 2, PE 3\n";
			cout<<"                                                                                                Total Units   26\n\n\n";
				payment();
		}
		else{
			error();
		}
		
		
	}
	else if (year==3){
		cout<<"                                                   BACHELOR OF SCIENCE IN COMPUTER SCIENCE\n";
		cout<<"                                                   with Specialization Track in Data Mining\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2021-2022)\n\n\n\n";
		cout<<"                                                                Third Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
				cout<<"   1st Semester\n";
			cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
			cout<<"                                                                                                                     Lec    Lab\n";
			cout<<"\n\n";
			cout<<"      CS 311          Automata Theory and Formal Languages                                                    3       3                   CS 221\n";
			cout<<"      CS 312          Architecture and Organization                                                           3       3                   CS 213, CS 1 21\n";
			cout<<"      CS 313          Information Assurance and Security                                                      2       2                   CS 222\n";
			cout<<"      CS 314          Software Engineering 1                                                                  3       2      1            CS 22 2, CS 21 2\n";
			cout<<"      CS 315          Social and Professional Issues                                                          3       3                   Co -requisite with CS 314\n";
			cout<<"      CS DM 3         Data Mining Techniques and Tools                                                        3       2      1            3rd Year Standing\n";
			cout<<"      CS DM 4         Data Mining Applications                                                                3       2      1            3rd Year Standing\n";
			cout<<"                                                                                                Total Units   20\n\n\n";
				payment();
		}
		else if(sem==3){
			cout<<"   2nd Semester\n";
			cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
			cout<<"                                                                                                                     Lec    Lab\n";
			cout<<"\n\n";
			cout<<"      CS 321          CS Thesis Writing 1                                                                     3       2        1          CS 313, CS GE Elec 4\n";
			cout<<"      CS 322          Software Engineering 2                                                                  3       2        1          CS 314\n";
			cout<<"      CS 323          Application Development and Emerging Technologies                                       3       2        1          CS 222\n";
			cout<<"      CS 324          Programming Languages                                                                   3       2        1          CS 213\n";
			cout<<"      CS Elec 2       CS Elective 2                                                                           3       2        1          3rd Year Standing\n";
			cout<<"      CS DM 5         Algorithms for Data Mining                                                              3       2        1          CS DM 3 &4\n";
			cout<<"      CS DM 6         Data Mining Methodology                                                                 3       2        1          CS DM 3 &4	\n";
			cout<<"                                                                                                Total Units   21\n\n\n";
				payment();
		}
		else if(sem==2){
				cout<<"   Mid Year\n";
			cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
			cout<<"                                                                                                                     Lec    Lab\n";
			cout<<"\n\n";
			cout<<"      CS Elec 3       CS Elective 3                                                                           3       2        1          4th year Standing\n";
			cout<<"      CS GE Elec 2    Multi-cultural Education                                                                3       3                   None\n";
			cout<<"      CS GE Elec 3    Leadership and Management in the Profession                                             3       3                   None\n";
			cout<<"                                                                                                Total Units   9\n\n\n";
				payment();
		}
		else{
			error();
		}
	
		
		}

	else if (year==4){
		cout<<"                                                   BACHELOR OF SCIENCE IN COMPUTER SCIENCE\n";
		cout<<"                                                   with Specialization Track in Data Mining\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2021-2022)\n\n\n\n";
		cout<<"                                                                Fourth Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
			cout<<"   1st Semester\n";
			cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
			cout<<"                                                                                                                     Lec    Lab\n";
			cout<<"\n\n";
			cout<<"      CS 412          Human-Computer Interaction                                                              1       1                   CS 122\n";
			cout<<"      CS 413          Networks and Communications                                                             3       2                   CS 213\n";
			cout<<"      CS 414          Operating Systems                                                                       3       2                   CS 213\n";
			cout<<"      CS 411          CS Thesis Writing 2                                                                     3       2                   CS 321\n";
			cout<<"                                                                                                Total Units   10\n\n\n";
				payment();
		}
		else if (sem==3){
			cout<<"   2nd Semester\n";
			cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
			cout<<"                                                                                                                     Lec    Lab\n";
			cout<<"\n\n";
			cout<<"      CS 421	         Practicum (486 hours)	                                                                 9			                 4th Year Standing\n";
			cout<<"                                                                                                Total Units   9\n\n\n";
			cout<<"                                                                                      TOTAL NUMBER OF UNITS   168\n\n\n";
				payment();
		}
		else{
			error();
		}
	
	}

	else{
	cout<<"\n\nNOT AVAILABLE!\n";
	}
}

//______________________________________________________________________________



void BSIT()
{
	int year, sem;
	char track;
	cout<<"BSIT\n";
	cout<<"TRACK:\n";
	cout<<"[A] Specialization Track In Networking and Security\n";
	cout<<"[B] Specialization Track In Web and Mobile Applications Development\n";
	cout<<"Choose track: ";
	cin>>track;
	
	if(track=='a' || track=='A'){
		cout<<"\n";
		classyear();
	cout<<"Choose year level:";
	cin>>year;
	
	if (year==1){
		cout<<"                                                   Bachelor of Science In Information Technology\n";
		cout<<"                                                   with Specialization Track In Networking and Security\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                First Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 1           Understanding the self                                                                  3       3                   None\n";
		cout<<"      GEC 4           Purposive Communication                                                                 3       3                   None\n";
		cout<<"      GEC 3           Mathematics in the Modern World                                                         3       3                   None\n";
		cout<<"      GEC 10	         Kontekswalisadong Komunikasyon sa Filipino	                                             3	     3	             	 None\n";
		cout<<"      IT 111	         Introduction to computing	                                                             3	     2	    1	         None\n";
		cout<<"      IT 112	         Computer programming 1	                                                                 3	     2	    1	         None\n";
		cout<<"      PE 1	         Physical education 1	                                                                 2	     2	                 None\n";
		cout<<"      NSTP 1          Civic Welfare Training Service 1                                                        3                           None\n";
		cout<<"                                                                                                Total Units   23\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 2	         Reading in Philippine History	                                                         3	     3		             None\n";
		cout<<"      GEC 8	         The Contemporary World	                                                                 3	     3	                 None\n";
		cout<<"      GEC 11	         Filipino sa Ibat-ibang Disiplina	                                                     3	     3		             GEC 10\n";
		cout<<"      IT 121	         Computer Programming 2	                                                                 3	     2	      1	         IT 112\n";
		cout<<"      IT 122	         Human Computer Interaction 1	                                                         3	     2	      1	         IT 112\n";
		cout<<"      IT 123	         Discrete Mathematics	                                                                 3	     3	        	     GEC 3\n";
		cout<<"      PE 2	         Physical education 2	                                                                 2	     2	 	             PE 1\n";
		cout<<"      NSTP 2     	 Civic Welfare Training Service 2                                                        3                           NSTP 1\n";
		cout<<"                                                                                                Total Units   23\n\n\n";
		payment();
		}
		else{
			error();
		}

}
	else if (year==2){
		cout<<"                                                   Bachelor of Science In Information Technology\n";
		cout<<"                                                   with Specialization Track In Networking and Security\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                Second Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 6	         Science, Technology & Society	                                                         3	     3		             None\n";
		cout<<"      GEC 7	         Ethics	                                                                                 3	     3		             None\n";
		cout<<"      GEC 5	         Art Appreciation	                                                                     3	     3		             None\n";
		cout<<"      IT 211	         Data Structure & Algorithms	                                                         3	     2	    1 	         IT 121\n";
		cout<<"      IT ELEC 1	     Platform Technologies	                                                                 3	     2	    1	         IT 121\n";
		cout<<"      IT ELEC 2	     Object Oriented Programming	                                                         3	     2   	1	         IT 121\n";
		cout<<"      IT BPO 1	     Business Communication	                                                                 3	     3	    	         None\n";
		cout<<"      PE 3	         Physical education 3	                                                                 2	     2		             PE 2\n";
		cout<<"                                                                                                Total Units   23\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT INST 1	     Climate Change and Disaster Risk Management	                                         3	     3	                 None\n";
		cout<<"      IT 221	         Information Management	                                                                 3	     2	      1	         IT 211\n";
		cout<<"      IT 222	         Networking 1 	                                                                         3	     2	      1	         IT ELEC 1\n";
		cout<<"      IT 223	         Quantitative Methods 	                                                                 3	     3		             IT 211\n";
		cout<<"      IT 224	         Integrative Programming & Technologies	                                                 3	     2	      1	         IT 211\n"; 
		cout<<"      IT 225	         Accounting for Information Technology	                                                 3	     3		             None\n";
		cout<<"      IT NS 1	     Cybersecurity Principles and Emerging Challenges	                                     3	     2	      1 	     IT 212, IT 222\n";
		cout<<"     PE 4	         Physical education                                                                      4	     2	      2		     PE 3 \n";
		cout<<"                                                                                                Total Units   23\n\n\n";
		payment();
		}
		else if(sem==2){
		cout<<"   Summer\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT 226	         Applications Development and Emerging Technologies 	                                 3       2	      1	         IT 221\n";
		cout<<"      IT ELEC 3	     Web Systems & Technologies	                                                             3	     2	      1   	     NONE\n";
		cout<<"                                                                                                Total Units   6\n\n\n";
		payment();
		}
		else{
			error();
		}
}
		
	else if (year==3){
		cout<<"                                                   Bachelor of Science In Information Technology\n";
		cout<<"                                                   with Specialization Track In Networking and Security\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                Third Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT GE LEC 1 	 The Entrepreneurial Mind	                                                             3	     3		             None\n";
		cout<<"      IT 311	         Advance Database Systems	                                                             3   	 2    	1	         IT 221\n";
		cout<<"      IT 312	         Networking 2	                                                                         3	     2	    1	         IT 222\n";
		cout<<"      CS 314          Software Engineering 1                                                                  3       2      1            CS 22 2, CS 21 2\n";
		cout<<"      IT 313	         System Integration & Architecture	                                                     3	     2	    1	         IT 224\n";
		cout<<"      IT 314	         Information Assurance & Security 1	                                                     3	     2	    1	         IT 224\n";
		cout<<"      IT NS 2	     Virtual Systems and Services	                                                         3	     2	    1	         IT 222\n";
		cout<<"                                                                                                Total Units   18\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 9	         The Life and Work of Rizal	                                                             3	     3		             None\n";
		cout<<"      IT GE LEC 2	 Multicultural Education	                                                             3	     3		             None\n";
		cout<<"      IT 321	         Information Assurance & Security 2	                                                     3	     2	      1	         IT 314\n";
		cout<<"      IT 322	         Social & Professional Issues	                                                         3	     3 	 	             GEC 7\n";
		cout<<"      IT 323	         Capstone Project & Research 1	                                                         3	     2	      1	         IT 226, IT 314\n";
		cout<<"      IT NS 3	     Applied Networks	                                                                     3	     2  	  1	         IT 312, IT NS 1\n";
		cout<<"      IT NS 4	     Internet of things	                                                                     3	     2        1	         IT 312, IT NS 1\n";
		cout<<"                                                                                                Total Units   21\n\n\n";
		payment();
		}
		else{
			error();
		}
}

	else if (year==4){
		cout<<"                                                   Bachelor of Science In Information Technology\n";
		cout<<"                                                   with Specialization Track In Networking and Security\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                Fourth Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT GE LEC 3	 Leadership and Management in the Profession	                                         3	     3	    	         None\n";
		cout<<"      IT 411	         System Administration & Maintenance	                                                 3	     2	      1	         IT 321\n";
		cout<<"      IT ELEC 4	     Human Computer Interaction 2 	                                                         3	     2	      1	         IT 122\n";
		cout<<"      IT 412	         Capstone Project & Research 2	                                                         3	     2	      1	         IT 323\n";
		cout<<"      IT BA 5	     Analytics Application	                                                                 3	     2	      1	         IT BA 2, IT BA 3\n";
		cout<<"      IT NS 5	     Introduction to Network Career Certification	                                         3	     3		             4th Year Standing\n";
		cout<<"                                                                                                Total Units   15\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT 421	         Internship/ OJT/ Practicum (486 hours)	                                                 9	     0	 	             4th Year Standing\n";
		cout<<"                                                                                                Total Units   9\n\n\n";
		payment();
		}
		else{
			error();
		}
}
	else{
		error();
	}
		
	}
	else if(track=='b' || track=='B'){
		cout<<"\n";
		classyear();
	cout<<"Choose year level:";
	cin>>year;
	
	if (year==1){
		cout<<"                                                   Bachelor of Science In Information Technology\n";
		cout<<"                                          with Specialization Track In Web and Mobile Applications Development\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                First Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 1           Understanding the self                                                                  3       3                   None\n";
		cout<<"      GEC 4           Purposive Communication                                                                 3       3                   None\n";
		cout<<"      GEC 3           Mathematics in the Modern World                                                         3       3                   None\n";
		cout<<"      GEC ELEC 1	     Health and Wellness	                                             					 3	     3	             	 None\n";
		cout<<"      IT 111	         Introduction to computing	                                                             3	     2	    1	         None\n";
		cout<<"      IT 112	         Computer programming 1	                                                                 3	     2	    1	         None\n";
		cout<<"      PE 1	         Physical education 1	                                                                 2	     2	                 None\n";
		cout<<"      NSTP 1          Civic Welfare Training Service 1                                                        3                           None\n";
		cout<<"                                                                                                Total Units   23\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 2	         Reading in Philippine History	                                                         3	     3		             None\n";
		cout<<"      GEC 8	         The Contemporary World	                                                                 3	     3	                 None\n";
		cout<<"      GEC ELEC IT 2	 Foreign Language 1	                                                     				 3	     3		             None\n";
		cout<<"      IT 121	         Computer Programming 2	                                                                 3	     2	      1	         IT 112\n";
		cout<<"      IT 122	         Human Computer Interaction 1	                                                         3	     2	      1	         IT 112\n";
		cout<<"      IT 123	         Discrete Mathematics	                                                                 3	     3	        	     GEC 3\n";
		cout<<"      PE 2	         Physical education 2	                                                                 2	     2	 	             PE 1\n";
		cout<<"      NSTP 2     	 Civic Welfare Training Service 2                                                        3                           NSTP 1\n";
		cout<<"                                                                                                Total Units   23\n\n\n";
		payment();
		}
		else{
			error();
		}

}
	else if (year==2){
		cout<<"                                                   Bachelor of Science In Information Technology\n";
		cout<<"                                          with Specialization Track In Web and Mobile Applications Development\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                Second Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 6	         Science, Technology & Society	                                                         3	     3		             None\n";
		cout<<"      GEC 7	         Ethics	                                                                                 3	     3		             None\n";
		cout<<"      GEC 5	         Art Appreciation	                                                                     3	     3		             None\n";
		cout<<"      IT 211	         Data Structure & Algorithms	                                                         3	     2	    1 	         IT 121\n";
		cout<<"      IT ELEC 1	     Platform Technologies	                                                                 3	     2	    1	         IT 121\n";
		cout<<"      IT ELEC 2	     Object Oriented Programming	                                                         3	     2   	1	         IT 121\n";
		cout<<"      IT BPO 1	     Business Communication	                                                                 3	     3	    	         None\n";
		cout<<"      PE 3	         Physical education 3	                                                                 2	     2		             PE 2\n";
		cout<<"                                                                                                Total Units   23\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT INST 1	     Climate Change and Disaster Risk Management	                                         2	     2	                 None\n";
		cout<<"      GEC ELEC IT 3	 Foreign Language 2	                                                     				 3	     3		             None\n";
		cout<<"      IT 221	         Information Management	                                                                 3	     2	      1	         IT 211\n";
		cout<<"      IT 222	         Networking 1 	                                                                         3	     2	      1	         IT ELEC 1\n";
		cout<<"      IT 223	         Quantitative Methods 	                                                                 3	     3		             IT 211\n";
		cout<<"      IT 224	         Integrative Programming & Technologies	                                                 3	     2	      1	         IT 211\n"; 
		cout<<"      IT 225	         Accounting for Information Technology	                                                 3	     3		             None\n";
		cout<<"      IT APPDEV 1	 Fundamentals of Mobile Technology	                                     				 3	     2	      1 	     IT ELEC 1, IT ELEC 2\n";
		cout<<"      PE 4	         Physical education                                                                      2	     2	      		     PE 3 \n";
		cout<<"                                                                                                Total Units   25\n\n\n";
		payment();
		}
		else if(sem==2){
		cout<<"   Summer\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT 226	         Applications Development and Emerging Technologies 	                                 3       2	      1	         IT 221\n";
		cout<<"      IT ELEC 3	     Web Systems & Technologies	                                                             3	     2	      1   	     NONE\n";
		cout<<"                                                                                                Total Units   6\n\n\n";
		payment();
		}
		else{
			error();
		}
}
		
	else if (year==3){
		cout<<"                                                   Bachelor of Science In Information Technology\n";
		cout<<"                                          with Specialization Track In Web and Mobile Applications Development\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                Third Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT GE LEC 1 	 The Entrepreneurial Mind	                                                             3	     3		             None\n";
		cout<<"      IT 311	         Advance Database Systems	                                                             3   	 2    	1	         IT 221\n";
		cout<<"      IT 312	         Networking 2	                                                                         3	     2	    1	         IT 222\n";
		cout<<"      IT APPDEV 2     Web Application                                                                  		 3       2      1            IT ELEC 3\n";
		cout<<"      IT 313	         System Integration & Architecture	                                                     3	     2	    1	         IT 224\n";
		cout<<"      IT 314	         Information Assurance & Security 1	                                                     3	     2	    1	         IT 224\n";
		cout<<"      IT APPDEV 3	 Mobile Application	                                                         			 3	     2	    1	         IT APPDEV 1\n";
		cout<<"                                                                                                Total Units   21\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 9	         The Life and Work of Rizal	                                                             3	     3		             None\n";
		cout<<"      IT GE LEC 2	 Multicultural Education	                                                             3	     3		             None\n";
		cout<<"      IT 321	         Information Assurance & Security 2	                                                     3	     2	      1	         IT 314\n";
		cout<<"      IT 322	         Social & Professional Issues	                                                         3	     3 	 	             GEC 7\n";
		cout<<"      IT 323	         Capstone Project & Research 1	                                                         3	     2	      1	         IT 226, IT 314\n";
		cout<<"      IT APPDEV 4	 Game Development	                                                                     3	     2  	  1	         IT APPDEV 2, IT APPDEV 3\n";
		cout<<"      IT APPDEV 5     Cloud Computing	                                                                     3	     2        1	         IT APPDEV 2, IT APPDEV 3\n";
		cout<<"                                                                                                Total Units   21\n\n\n";
		payment();
		}
		else{
			error();
		}
}

	else if (year==4){
		cout<<"                                                   Bachelor of Science In Information Technology\n";
		cout<<"                                          with Specialization Track In Web and Mobile Applications Development\n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                Fourth Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT GE LEC 3	 Leadership and Management in the Profession	                                         3	     3	    	         None\n";
		cout<<"      IT 411	         System Administration & Maintenance	                                                 3	     2	      1	         IT 321\n";
		cout<<"      IT ELEC 4	     Human Computer Interaction 2 	                                                         3	     2	      1	         IT 122\n";
		cout<<"      IT 412	         Capstone Project & Research 2	                                                         3	     2	      1	         IT 323\n";
		cout<<"                                                                                                Total Units   12\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IT 421	         Internship/ OJT/ Practicum (486 hours)	                                                 9	     0	 	             4th Year Standing\n";
		cout<<"                                                                                                Total Units   9\n";
		cout<<"                                   											                   Total Units   163\n";
		payment();
		}
		else{
			error();
		}
}
	else{
		error();
	}
	}
	
	else{
		error();
	}
	

}

//______________________________________________________________________________

void BSIS()
{
	int year, sem;
	cout<<"BSIS";
	classyear();
	cout<<"Choose year level:";
	cin>>year;
	if (year==1){
		cout<<"                                                   BACHELOR OF SCIENCE IN INFORMATION SYSTEMS\n";
		cout<<"                                      with Specialization Track in Service Management for Business Process Outsourcing \n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2021-2022)\n\n\n\n";
		cout<<"                                                                First Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 4 	         Purposive Communication	                                                             3	     3		             None\n";
		cout<<"      GEC 5	         Art Appreciation	                                                                     3	     3		             None\n";
		cout<<"      IS 111	         Introduction to Computing 	                                                             3	     2	     1	         None\n";
		cout<<"      IS 112	         Computer Programming 1	                                                                 3	     2	     1	         None\n";
		cout<<"      IS GEC Elec 1	 Health and Wellness Science	                                                         3 	     3		             None\n";
		cout<<"      IS GE Elec 2	 Multicultural Education	                                                             3	     3		             None\n";
		cout<<"      PE 1	         Physical Activity Towards Health Fitness I (Movement Patterns)	                         2	     2		             None\n";
		cout<<"      NSTP 1	         National Service Training Program 1	                                                (3)	     3		             None\n";
		cout<<"                                                                                                Total Units   20      18      2\n\n\n";
		payment();
			}
		
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 1           Understanding the Self                                                                  3       3                   None\n";
		cout<<"      GEC 2           Readings in Philippine History                                                          3       3                   None\n";
		cout<<"      GEC 3	         Mathematics in the Modern World	                                                     3	     3		             None\n";
		cout<<"      IS GEC Elec 2	 Gender and Society	                                                                     3	     3		             None \n";
		cout<<"      IS INST 1	     Climate Change and Disaster Risk Management	                                         2	     2  		         None\n";
		cout<<"      IS 121	         Fundamentals of Information Systems	                                                 3    	 3		             IS 111\n";
		cout<<"      IS 122	         Computer Programming 2	                                                                 3	     2     	 1	         IS 112\n";
		cout<<"      PE 2	         Physical Activity Towards Health Fitness II(Exercise Program)	                         2	     2		             PE 1\n";
		cout<<"      NSTP 2	         National Service Training Program 1	                                                (3) 	 3		             NSTP 1\n";
		cout<<"                                                                                                Total Units   22      21      1\n\n\n";
		payment();
			}
			
		else{
			error();
		}

	}
	else if (year==2){
		cout<<"                                                   BACHELOR OF SCIENCE IN INFORMATION SYSTEMS\n";
		cout<<"                                      with Specialization Track in Service Management for Business Process Outsourcing \n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2021-2022)\n\n\n\n";
		cout<<"                                                                Second Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 6	         Science, Technology, and Society	                                                     3	     3		             None \n";
		cout<<"      GEC 8	         The Contemporary World	                                                                 3	     3		             None\n";
		cout<<"      IS Inst 2	     Creative and Critical Thinking	                                                         2	     1  	 1	         None\n";
		cout<<"      IS 211	         Data Structures and Algorithms 	                                                     3	     2 	     1	         IS 122\n";
		cout<<"      IS 212	         Professional Issues in Information Systems	                                             3 	     3  		         IS 111, IS 121 \n";
		cout<<"      IS 213	         IT Infrastructure and Network Technologies	                                             3	     2	     1	         IS 111, IS 121\n";
		cout<<"      IS 214	         Organization and Management Concepts	                                                 3	     3		             IS 111\n";
		cout<<"      PE 3	         Physical Activity Towards Health Fitness III 	                                         2	     2		             PE 2\n";
		cout<<"      IS BPO 211	     Business Communication for BPO	                                                         3	     3		             GEC 4\n";
		cout<<"                                                                                                Total Units   25      22      3\n\n\n";
		payment();
			}
		
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 7	         Ethics	                                                                                 3	     3		             None\n";
		cout<<"      GEC 9           Life and Works of Rizal                                                                 3       3                   None\n";
		cout<<"      IS GE Elec 1    Entrepreneurial Mind                                                                    3       3                   None\n";
		cout<<"      IS 221	         Systems Analysis and Design	                                                         3	     2	     1	         2nd Year Standing\n";
		cout<<"      IS 222	         Financial Management	                                                                 3	     3		             IS 214\n";
		cout<<"      IS Elec 1	     IT Audit and Controls	                                                                 3	     2	     1	         2nd year standing\n";
		cout<<"      PE 4	         Physical Activity Towards Health Fitness IV	                                         2	     2		             PE 3\n";
		cout<<"      IS BPO 221	     Service Culture	                                                                     3	     2	     1	         IS BPO 211\n";
		cout<<"                                                                                                Total Units   23      20      3\n\n\n";
		payment();
			}
			
		else{
			error();
		}
	}
	else if (year==3){
		cout<<"                                                   BACHELOR OF SCIENCE IN INFORMATION SYSTEMS\n";
		cout<<"                                      with Specialization Track in Service Management for Business Process Outsourcing \n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2021-2022)\n\n\n\n";
		cout<<"                                                                Third Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IS 311	         Information Management	                                                                 3	     2 	    1 	         IS 211\n";
		cout<<"      IS 312	         Enterprise Architecture	                                                             3	     2	    1	         IS 213\n";
		cout<<"      IS 313	         Business Process Management	                                                         3	     3		             IS 222\n";
		cout<<"      IS 314	         Quantitative Methods	                                                                 3	     3		             3rd year standing\n";
		cout<<"      IS Elec 2	     Data Mining	                                                                         3	     2	    1	         3rd year standing\n";
		cout<<"      IS BPO 311	     Fundamentals of Business Process Outsourcing 101	                                     3	     2	    1	         IS BPO 211, IS BPO 221\n";
		cout<<"      IS BPO 312	     Principles of Systems Thinking	                                                         3       3		             IS BPO 211, IS BPO 221\n";
		cout<<"                                                                                                Total Units   21      17     4\n\n\n";
		payment();
			}
			
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IS GEC Elec 3	 Foreign Language 1	                                                                     3	     3		             None\n";
		cout<<"      IS 321	IS       Project Management 1	                                                                 3	     3		             IS 221\n";
		cout<<"      IS 322	         Evaluation of Business Performance	                                                     3	     3		             IS 313\n";
		cout<<"      IS 323	         Capstone Project 1	                                                                     3	     2	     1	         3rd year standing\n";
		cout<<"      IS Elec 3	     IT Security and Risks Management	                                                     3	     2 	     1	         3rd year standing\n";
		cout<<"      IS GE Elec 3	 Leadership and Management in the Profession	                                         3	     3		             None\n";
		cout<<"      IS BPO 321	     Fundamentals of Business Process Outsourcing 102	                                     3	     2	     1	         IS BPO 211, IS BPO 221, IS BPO 311\n";
		cout<<"                                                                                                Total Units   21      18      3\n\n\n";
		payment();
			}
			
		else{
			error();
		}
	}

	else if (year==4){
		cout<<"                                                   BACHELOR OF SCIENCE IN INFORMATION SYSTEMS\n";
		cout<<"                                      with Specialization Track in Service Management for Business Process Outsourcing \n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2021-2022)\n\n\n\n";
		cout<<"                                                                Fourth Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IS 411	         IS Strategy, Management, and Acquisition	                                             3	     3		             4th year standing\n";
		cout<<"      IS 412	         Applications Development and Emerging Technologies	                                     3	     2	     1	         4th year standing\n";
		cout<<"      IS 413	         Capstone Project 2	                                                                     3	     2	     1	         IS 323\n";
		cout<<"      IS Elec 4	     IS Innovations and New Technologies	                                                 3	     2	     1	         4th year standing\n";
		cout<<"      IS FOR 411	     Foreign Language	                                                                     3	     3		             None\n";
		cout<<"                                                                                                Total Units   15      12      3\n\n\n";
		payment();
			}
			
		else if(sem==3){	
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      IS 421	         Practicum for Information Systems/ Internship Program (486 hours)	                     9	      9		             4th year standing\n";
		cout<<"                                                                                                Total Units   9        9\n\n\n";
		cout<<"                                                                                      TOTAL NUMBER OF UNITS   156\n\n\n";
		payment();
			}
			
		else{
			error();
		}
	}

	else{
cout<<"\n\nNOT AVAILABLE!\n";
	}
}

//______________________________________________________________________________
void BLIS()
{
	int year, sem;
	cout<<"BLIS";
	classyear();
	cout<<"Choose year level:";
	cin>>year;
	if (year==1){
	cout<<"                                                   BACHELOR OF LIBRARY AND INFORMATION SCIENCE \n";
	cout<<"                                      with Specialization Track in Service Management for Business Process Outsourcing \n ";
	cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
	cout<<"                                                                First Year\n";
	
	semester();
	cout<<"\nChoose what semester: ";
	cin>>sem;
	
	if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 1	         Understanding the Self	                                                                 3	     3		             None\n";
		cout<<"      GEC 4	         Purposive Communication	                                                             3	     3		             None\n";
		cout<<"      GEC 7	         Ethics	                                                                                 3  	 3		             None\n";
		cout<<"      GEC 10	         Kontekstwalisadong Komunikasyon sa Filipino	                                         3	     3		             None\n";
		cout<<"      LIS 111	     Introduction to Library and Information Science	                                     3	     3		             None\n";
		cout<<"      LIS Elec 1	     School/Academic Librarianship	                                                         3	     3		             None\n";
		cout<<"      LIS ICT 111	 Information Processing and Handling in Libraries and Information Centers	             3	     2	     3	         None\n";
		cout<<"      PE 1 	         Physical Education 1	                                                                 2	     2		             None\n";
		cout<<"      NSTP 1	         Civic Welfare Training Service 1, MS, LTS	                                             3	     3		             None\n";
		cout<<"                                                                                                Total Units   26\n\n\n";
		payment();
		}
		
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 2	         Reading in Philippine History 	                                                         3	     3		             None\n";
		cout<<"      GEC 3	         Mathematics in the Modern World	                                                     3	     3		             None\n";
		cout<<"      GEC 11	         Filipino sa Iba't Ibang Disiplina	                                                     3	     3		             GEC 10\n";
		cout<<"      INST 1	         Climate Change and Disaster Risk Management	                                         3	     3		             None \n";
		cout<<"      LIS 121	     Collection Management of Information Resources	                                         3	     3		             LIS 111\n";
		cout<<"      LIS Elec 2	     Special/Public Librarianship	                                                         3	     3		             None\n";
		cout<<"      LIS ICT 121	 Web Technologies in Libraries and Information Science	                                 3	     2	     3	         LIS ICT 111\n";
		cout<<"      PE 2	         Physical Education                                                                      2	     2  	 2		     PE 1\n";
		cout<<"      NSTP 2	         Civic Welfare Training Service 2, MS, LTS	                                             3	     3		             NSTP 1\n";
		cout<<"                                                                                                Total Units   26\n\n\n";
		payment();
		}
		else{
			error();
		}

	}
	else if (year==2){
		cout<<"                                                   BACHELOR OF LIBRARY AND INFORMATION SCIENCE \n";
		cout<<"                                      with Specialization Track in Service Management for Business Process Outsourcing \n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                Second Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 6	         Science, Technology, and Society	                                                     3	     3		             None  \n";
		cout<<"      GEC 7	         The Contemporary World	                                                                 3	     3		             None\n";
		cout<<"      LIS GE Elec 1	 The Entrepreneurial Mind	                                                             3	     3		             None\n";
		cout<<"      LIS 211	     Information Resources and Services I	                                                 3	     3		             LIS 111, LIS 121\n";
		cout<<"      LIS 212	     Organization of Information Resources I	                                             3	     3		             LIS 111, LIS 121\n";
		cout<<"      LIS Elec 3	     Preservation of Information Resources	                                                 3	     3		             2nd  year Standing\n";
		cout<<"      LIS ICT 211	 Digital Libraries and Resources	                                                     3	     2	     3	         LIS ICT 121\n";
		cout<<"      PE 3	         Physical Activity Towards Health Fitness III 	                                         2	     2		             PE 2\n";	  
		cout<<"                                                                                                Total Units   23\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 5	         Art Appreciation	                                                                     3    	 3		             None\n";
		cout<<"      LIS GE Elec 2	 Leadership and Management in the Profession	                                         3	     3		             None\n";
		cout<<"      LIS 221	     Information Resources and Services II	                                                 3	     3		             LIS 211\n";
		cout<<"      LIS 222	     Organization of Information Resources II	                                             3	     3		             LIS 212\n";
		cout<<"      LIS 223	     Library Materials for Children and Young Adults	                                     3	     3		             LIS 121\n";
		cout<<"      LIS ICT 221	 Programming Fundamentals	                                                             3  	 2	     3	         LIS ICT 211\n";
		cout<<"      PE 4	         Physical Activity Towards Health Fitness IV	                                         2	     2		             PE 3\n";
		cout<<"      LIS Elec 4	     Philosophies and Principles of Teaching	                                             3	     3		             2nd  year Standing\n";
		cout<<"                                                                                                Total Units   23\n\n\n";
		payment();
		}
		else{
			error();
		}
		}
	else if (year==3){
		cout<<"                                                   BACHELOR OF LIBRARY AND INFORMATION SCIENCE \n";
		cout<<"                                      with Specialization Track in Service Management for Business Process Outsourcing \n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                Third Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      GEC 9	         Life and Works of Rizal	                                                             3	     3		             None\n";
		cout<<"      LIS GE Elec 3	 Environmental Science	                                                                 3	     3		             None\n";
		cout<<"      LIS 311	     Indexing and Abstracting	                                                             3	     3		             LIS 212, LIS 222\n";
		cout<<"      LIS 312	     Introduction to Records Management and Archives	                                     3	     3		             None\n";
		cout<<"      LIS 313	     Library and Information Management in Academic Libraries	                             3	     3		             LIS 221, LIS 222\n";
		cout<<"      LIS ICT 311	 Systems Analysis and Design in Libraries and Information Centers	                     3       2	    3	         3rd year Standing\n";
		cout<<"      LIS Elec 5	     Educational Technology	                                                                 3	     3		             3rd year Standing\n";
		cout<<"      LIS Elec 6	     Indigenous Knowledge and Multi-Culturalism	                                             3	     3		             3rd year Standing\n";
		cout<<"                                                                                                Total Units   24\n\n\n";
		payment();
		}
		else if(sem==3){
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      LIS 321	     Management of Libraries and Information Centers	                                     3	     3		             LIS 111 - LIS 311\n";
		cout<<"      LIS 322	     Information Literacy	                                                                 3 	     3		             LIS 111, LIS 211, LIS 221, LIS 212, LIS 311\n";
		cout<<"      LIS 323	     Information Sources and Services in Academic Librarianship	                             3	     3		             LIS 313\n";
		cout<<"      LIS ICT 321	 Database Design for Libraries	                                                         3	     2	     3	         LIS ICT 311\n";
		cout<<"      LIS ICT 322	 Introduction to Data Science	                                                         3	     2	     3	         LIS ICT 311\n";
		cout<<"      LIS Elec 7	     Seminar in Library and Information Science	                                             3	     3		             3rd Year Standing\n";
		cout<<"      LIS Elec 8	     Foreign Language	                                                                     3       3		             3rd Year Standing\n";
		cout<<"                                                                                                Total Units   21\n\n\n";
		payment();
		}
		else{
			error();
		}
	}

	else if (year==4){
		cout<<"                                                   BACHELOR OF LIBRARY AND INFORMATION SCIENCE \n";
		cout<<"                                      with Specialization Track in Service Management for Business Process Outsourcing \n ";
		cout<<"                                                 (Effective First Semester, S.Y. 2018-2019)\n\n\n\n";
		cout<<"                                                                Fourth Year\n";
		
		semester();
		cout<<"\nChoose what semester: ";
		cin>>sem;
		
		if(sem==1){
		cout<<"   1st Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      LIS 411	     Research Methods in Library and Information Science	                                 3	     2	     3	         LIS 111 - LIS 312 LIS ICT 111- LIS ICT 322 LIS Elec 1 - LIS Elec 7\n";
		cout<<"      LIS 412	     Library Practice I (200 hours)	                                                         3		         9	         LIS 111 - LIS 323\n";
		cout<<"      ICT LIS 411	 Internet Technologies and Information Services 	                                     3	     2       3	         4th year Standing\n";
		cout<<"      INST 2	         Course Audit 1	                                                                         6    	 6		             4th year Standing\n";
		cout<<"                                                                                                Total Units   15\n\n\n";
		payment();
		}
		else if(sem==3){	
		cout<<"   2nd Semester\n";
		cout<<"     Course No.                  Course Title                                                               Units       Units         Pre-requisite\n";
		cout<<"                                                                                                                     Lec    Lab\n";
		cout<<"\n\n";
		cout<<"      LIS 421	     Thesis/Research Writing	                                                             3	     2	     3	         LIS 411\n";
		cout<<"      LIS 422	     Library Practice II (200 hours)	                                                     3	 	         9	         LIS 412\n";
		cout<<"      INST 3	         Course Audit 2	                                                                         6	     6		             INST 2\n";
		cout<<"                                                                                                Total Units   12\n";
		cout<<"                                                                                      TOTAL NUMBER OF UNITS   170\n\n\n";
		payment();
		}
		else{
			error();
		}
	}
		
	else{
cout<<"\n\nNOT AVAILABLE!\n";
	}
}

//______________________________________________________________________________


void MIT()
{
	int program, year, sem;
	cout<<"MIT\n\n\n";
	cout<<"Choose what program of MIT:"<<endl;
	cout<<"(1)  Under Bridge Program\n";
	cout<<"(2)  For Regular MIT Program\n";
	cin>>program;
	
	if (program==1){
		cout<<"                                                   BRIDGING COURSES: (For Non-ITE Graduate) 18 units \n";
		cout<<"                      Applicants without backgrounds in Information technology, computer science, computer engineering, electronics communication\n ";
		cout<<"                               and engineering, mathematics and related fields are required to take the following subjects.\n\n\n\n";
		cout<<"                                                              (Under Bridge Program)\n\n";
		
		cout<<"Choose what semester:\n";
		cout<<"(1)  First Semester\n";
		cout<<"(2)  Second Semester\n";
		cin>>sem;
		
		if(sem==1){
			cout<<"   1st Semester\n";
			cout<<"     Code                  Description                                                                      Units\n";
			cout<<"\n\n";
			cout<<"      IT101	         Structured of Programming Languages	                                                 3\n";
			cout<<"      IT102	         Database Management Systems	                                                         3\n";
			cout<<"      IT103	         Operating Systems	                                                                     3\n";
			cout<<"                                                                                                Total Units   9\n\n\n";
			payment();
		}
		else if (sem==2){
			cout<<"   2nd Semester\n";
			cout<<"     Code                  Description                                                                      Units\n";
			cout<<"\n\n";
			cout<<"      IT104	         Object-Oriented Programming 	                                                         3\n";
			cout<<"      IT105	         Introduction to Software Engineering	                                                 3\n";
			cout<<"      IT106	         Data Communications and Computer Networks	                                             3\n";
			cout<<"                                                                                                Total Units   9\n\n\n";
			payment();
		}
		else{
			error();
		}
}

	else if (program==2){
		cout<<"                                                   BRIDGING COURSES: (For Non-ITE Graduate) 18 units \n";
		cout<<"                      Applicants without backgrounds in Information technology, computer science, computer engineering, electronics communication\n ";
		cout<<"                               and engineering, mathematics and related fields are required to take the following subjects.\n\n\n\n";
		cout<<"                                                              (For Regular MIT Program)\n";
		
		cout<<"Choose what year and if its summer:\n";
		cout<<"(1)  First Year\n";
		cout<<"(2)  Summer\n";
		cout<<"(3)  Second Year\n";
		cin>>year;
		
		if(year==1){
			cout<<"        FIRST YEAR:\n";
			cout<<"Choose what semester:\n";
			cout<<"(1)  First Semester\n";
			cout<<"(2)  Second Semester\n";
			cin>>sem;
			
			if(sem==1){
				cout<<"   1st Semester\n";
				cout<<"     Code                  Description                                                                      Units\n";
				cout<<"\n\n";
				cout<<"      MIT 101	     Advanced Operating System and Networking	                                             3\n";
				cout<<"      MIT 102	     Advanced Database Systems	                                                             3\n";
				cout<<"      MIT 103 	     Advanced Systems Design and Implementation	                                             3\n";
				cout<<"      MIT 104	     Technology and Project Management	                                                     3\n";
				cout<<"                                                                                                Total Units   12\n\n\n";
				payment();
			}
			
			else if(sem==2){
				cout<<"   2nd Semester\n";
				cout<<"     Code                  Description                                                                      Units\n";
				cout<<"\n\n";
				cout<<"      MIT 201	     Human Computer Interaction	                                                             3\n";
				cout<<"      MIT 202	     Data Warehouse Concepts and Design	                                                     3\n";
				cout<<"      MIT 203	     IT Web Site Construction and Management	                                             3\n";
				cout<<"      MIT 204	     Mobile Application Development                                                          3\n";
				cout<<"                                                                                                Total Units   12\n\n\n";
				payment();
			}
			else{
				error();
			}
		}
		
		else if(year==2){
			cout<<"        SUMMER:\n";
			cout<<"   SUMMER\n";
			cout<<"     Code                  Description                                                                      Units\n";
			cout<<"\n\n";
			cout<<"      MIT 205	     Client/Server Systems  with Mobile Technology	                                         3\n";
			cout<<"      MIT 206	     E-learning applications	                                                             3\n";
			cout<<"                                                                                                Total Units   6\n\n\n";
			payment();
		}
		
		else if(year==3){
			cout<<"        SECOND YEAR:\n";
			cout<<"Choose what semester:\n";
			cout<<"(1)  First Semester\n";
			cout<<"(2)  Second Semester\n";
			cin>>sem;
			
			if(sem==1){
				cout<<"   1st Semester\n";
				cout<<"     Code                  Description                                                                      Units\n";
				cout<<"\n\n";
				cout<<"      MIT 207	    Security Management in Information Systems	                                             3\n";
				cout<<"      MIT 208	    Interactive Multimedia Applications Development	                                         3\n";
				cout<<"      MIT 301	    Capstone in Information Technology 1 (Proposal)	                                         3\n";
				cout<<"                                                                                                Total Units   9\n\n\n";
				payment();
			}
			
			else if(sem==2){
				cout<<"   2nd Semester\n";
				cout<<"     Code                  Description                                                                      Units\n";
				cout<<"\n\n";
				cout<<"      MIT 302	     Capstone in Information Technology 2	                                                 3\n";
				cout<<"                                                                                                Total Units   3\n\n\n";
				cout<<"                                                                   Total Number Of Units   45\n\n\n";
				payment();
			}
		}
		else{
			error();
		}
		

}
	
	else{
cout<<"\n\nNOT AVAILABLE!\n";
	}

}

//______________________________________________________________________________


void course()
{
	char x;
	cout<<"===========================================================================================\n";
	cout<<"\n\nENROLLEE'S COURSE\n";
	cout<<"[A] BSCS\n";
	cout<<"[B] BSIT\n";
	cout<<"[C] BSIS\n";
	cout<<"[D] BLIS\n";
	cout<<"[E] MIT\n\n";
	cout<<"Enter Course:";
	
	cin>>x;
	
	if (x == 'A' || x == 'a'){
		BSCS();
		}
	
	else if (x == 'B' || x == 'b'){
		BSIT();
		}
		
	else if (x == 'C' || x == 'c'){
		BSIS();
		}
		
	else if (x == 'D' || x == 'd'){
		BLIS();
		}
	else if (x == 'E' || x == 'e'){
		MIT();
	}
		
	else {
	cout<<"\n";
		}
}

//______________________________________________________________________________






int main(){
	system("Color 0A");
	
	header();
	cout<<"Kindly Fill Out The Student Form!"<<endl;
	
	studentInfo();
	load();
	course();
	
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tEnrolee's System Made by DGREATEJ05";
	
	
	
}
