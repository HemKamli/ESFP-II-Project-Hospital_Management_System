#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
class hospital_mgmt{
	public:
		int patient_id[20] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120}; 
		int doctor_id[8] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008}; 
		int ward_no[20] = {501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520};
		string doctor_name[8] = {"Dr. Sharma","Dr. Verma","Dr. Shah","Dr. Rahul","Dr. Tejas","Dr. Dandi","Dr. Patel","Dr. Prajaptai"};
		string date_of_arrival[20] = {"10/03/2021", "21/01/2021", "19/02/2021", "23/03/2021", "31/03/2021","10/04/2021", "29/04/2021", "19/05/2021", "23/04/2021", "30/05/2021","20/03/2021", "21/02/2021", "19/03/2021", "23/03/2021", "30/03/2021","10/03/2021", "21/02/2021", "19/03/2021", "23/03/2021", "30/03/2021"};
		string disease_found[20]= {"Corona", "Dangue", "vomiting", "malaria", "asthama", "High-fever","Corona", "Dangue", "asthama", "malaria", "asthama", "High-fever","Corona", "Dangue", "vomiting", "malaria", "asthama", "High-fever","Corona", "Dangue"};
		string patient_name[20] = {"Ramesh Patel", "Shyam Shah", "Rahul Thakor", "Raj Rathore", "Yogesh Patel", "Jayesh Singh", "Soham Sharma", "Divyesh Patel", "Rakesh Patel", "Roshan shah","Ketan Shah", "Mukesh Patel", "Ganesh Shah", "Sahil Patel", "Mohmad Siraj ", "Mangesh Rohit", "Vivek Rathore", "Vishal Shah", "Paresh Patel", "Kenil Patel"};
		string type_of_ward[20] = {"General  ", "Emergency", "ICU      ", "Covid    ", "General  ", "Emergency", "ICU      ", "Covid    ","General  ", "Emergency", "ICU      ", "Covid    ","General  ", "Emergency", "ICU      ", "Covid    ","General  ", "Emergency", "ICU      ", "Covid    ",};
		string treatment_type[20] = {"severe", "general", "severe", "general", "severe", "general", "severe", "general", "severe", "general", "severe", "general", "severe", "general", "severe", "general", "severe", "general", "severe", "general"};
		string treated_by_doctor[20] = {"Dr. Sharma","Dr. Verma","Dr. Shah","Dr. Rahul","Dr. Tejas","Dr. Dandi","Dr. Patel","Dr. Prajaptai","Dr. Sharma","Dr. Verma","Dr. Shah","Dr. Rahul","Dr. Tejas","Dr. Dandi","Dr. Patel","Dr. Prajaptai","Dr. Sharma","Dr. Verma","Dr. Sharma","Dr. Verma"};
};

class Class2: public hospital_mgmt{
	public:
		void Pretask1()
		{
			ofstream fin;
			fin.open("newfile.txt");
			for(int i = 0;i<20; i++)
			{
				fin<<"  "<<patient_id[i]<<"\t\t"<<patient_name[i]<<"\t  "<<date_of_arrival[i]<<"\t   "<<type_of_ward[i]<<" \t  "<<treatment_type[i]<<"\t  "<<treated_by_doctor[i]<<"\t\t  "<<disease_found[i]<<endl;
			}
			fin.close();
		}

		void Task1()
		{
			cout<<"\n";
			cout<<"*******************************************"<<endl;
			cout<<"1. Patients who are treated by  \"Dr Sharma\""<<endl;
			cout<<"*******************************************"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "Dr. Sharma";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
		}
		void Task2()
		{
			cout<<"\n";
			cout<<"********************************************************"<<endl;
			cout<<"2. patients who are undergoing treatment for \"Asthama\""<<endl;
			cout<<"********************************************************"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "asthama";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
		}
		void Task3()
		{
			cout<<"\n";
			cout<<"***************************************************"<<endl;
			cout<<" 3. Doctors who are treating \"severe\" patients."<<endl;
			cout<<"***************************************************"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "severe";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
		}
		void Task4()
		{
			string treated_by_doc[20] = {"Dr. Prajapati", "Dr. Tejas", "Dr. Dandi", "Dr. Verma", "Dr. Shah", "Dr. Prajaptai", "Dr. Patel", "Dr. Rahul", "Dr. Sharma", "Dr. Shah", "Dr. Rahul", "Dr. Sharma", "Dr. Sharma", "Dr. Verma", "Dr. Dandi", "Dr. Verma", "Dr. Patel", "Dr. Verma", "Dr. Sharma", "Dr. Tejas"};
    		int len = sizeof(patient_name)/sizeof(patient_name[0]);
      		std::sort(patient_name, patient_name + len);
      		
			  cout<<"\n***************************************************************************";
      		cout<<"\n4. Patients names along with the doctors treating them in ascending order"<<endl;
			  cout<<"***************************************************************************"<<endl;
				for(int i=0; i< len; i++)
				{
					cout<<" "<<patient_name[i]<<"\t"<<treated_by_doc[i]<<endl;
				}
		}
		void Task5()
		{
			cout<<"\n";
			cout<<"****************************************"<<endl;
			cout<<"5. Patients according to the ward type"<<endl;
			cout<<"****************************************"<<endl;
			cout<<"\"General\" ward"<<endl;
			cout<<"---------------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "General";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}
		void Task5_1()
		{
			cout<<"\n";
			cout<<"\"Emergency\" ward"<<endl;
			cout<<"---------------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "Emergency";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}
		void Task5_2()
		{
			cout<<"\n";
			cout<<"\"ICU\" ward"<<endl;
			cout<<"---------------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "ICU";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}
		void Task5_3()
		{
			cout<<"\n";
			cout<<"\"Covid\" ward"<<endl;
			cout<<"-----------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "Covid";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}

		
};

class Class3: public hospital_mgmt
{
	public:
		void Task6()
		{
			cout<<"\n";
			cout<<"****************************************"<<endl;
			cout<<"6. Patients according to Disease found"<<endl;
			cout<<"****************************************"<<endl;
			cout<<"According \"Corona\""<<endl;
			cout<<"-----------------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "Corona";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}
		void Task6_1()
		{
			cout<<"\n";
			cout<<"According \"Dangue\""<<endl;
			cout<<"-----------------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "Dangue";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}
		void Task6_2()
		{
			cout<<"\n";
			cout<<"According \"vomiting\""<<endl;
			cout<<"-------------------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "vomiting";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}
		void Task6_3()
		{
			cout<<"\n";
			cout<<"According \"malaria\""<<endl;
			cout<<"------------------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "malaria";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}
		void Task6_4()
		{
			cout<<"\n";
			cout<<"According \"asthama\""<<endl;
			cout<<"------------------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "asthama";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}
		void Task6_5()
		{
			cout<<"\n";
			cout<<"According \"High-fever\""<<endl;
			cout<<"---------------------------"<<endl;
			cout<<"Patient_id"<<"\tPatient_Name"<<"\tdate_of_arrival"<<"\t type_of_ward"<<"\t treatment_type"<<"\t treated_by_doctor"<<"\t disease_found"<<endl;  
			cout<<"-----------------------------------------------------------------------------------------------------------------------------"<<endl;
			ifstream ifs("newfile.txt");
  			string word = "High-fever";
  			string line;
			while( getline(ifs, line ))
  			{
    			size_t pos = line.find(word);
    			if ( pos != string::npos)
    			cout << line << endl;
    		} 
			ifs.close();
		}
		void Pretask7()
		{
			ofstream obj;
			obj.open("newfile2.txt");
			for(int i = 0;i<8; i++)
			{
				obj<<"\t "<<doctor_name[i]<<"\t  "<<treatment_type[i]<<endl;
			}
			obj.close();
		}
	
		void Task7()
		{
			string a;
			ifstream fre;
	        fre.open("newfile2.txt");
			cout<<"\n";	
			cout<<"*****************************************************"<<endl;
			cout<<"7. Doctors along with their current treatment_type"<<endl;
			cout<<"*****************************************************"<<endl;
			cout<<"\t Doctor_name"<<"\t treatment_type"<<endl; 
			cout<<"---------------------------------------------------"<<endl;
	    	for(int j=0; j < 8; j++)
    	    {
    	    	getline(fre,a);
    	    	cout<<a<<endl;
			}
			fre.close();
		}
	
		void Pretask8()
		{
			ofstream obj;
			obj.open("newfile3.txt");
			for(int i = 0; i<20; i++)
			{
				obj<<"   "<<patient_id[i]<<"  \t"<<patient_name[i]<<"\t\t"<<treated_by_doctor[i]<<"\t\t    "<<date_of_arrival[i]<<"\t\t"<<ward_no[i]<<endl;
			}
			obj.close();
		}
		
		void Task8()
		{
			string a;
			ifstream fre;
        	fre.open("newfile3.txt");
			cout<<"\n";
			cout<<"*********************************************************************"<<endl;
			cout<<"8. Patients with respective doctors and date_of_arrival and ward_no."<<endl;
			cout<<"*********************************************************************"<<endl;
			cout<<"patient_id"<<"\tpatient_name"<<"\t     treated_by_doctor"<<"\t\tdate_of_arrival"<<"\t     ward_no"<<endl;
			cout<<"------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        	for(int j=0; j < 20; j++)
        	{
        		getline(fre,a);
        		cout<<a<<endl;
			}
    		fre.close();
		}
};

int main()
{
	Class2 obj1;
	obj1.Pretask1();
	obj1.Task1();
	obj1.Task2();
	obj1.Task3();
	obj1.Task4();
	obj1.Task5();
	obj1.Task5_1();
	obj1.Task5_2();
	obj1.Task5_3();

	Class3 object;
	object.Task6();
	object.Task6_1();
	object.Task6_2();
	object.Task6_3();
	object.Task6_4();
	object.Task6_5();
	object.Pretask7();
	object.Task7();
	object.Pretask8();
	object.Task8();
	return 0;	
}
