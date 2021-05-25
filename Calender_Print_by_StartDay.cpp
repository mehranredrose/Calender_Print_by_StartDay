//by mehranredrose
//
//the output should be like this by getting 3 as first day of year.
//           "Farvardin"
//   Sat  Sun  Mon  Tue  Wed  Thu  Fri
//
//                   1    2    3    4
//    5    6    7    8    9   10   11
//   12   13   14   15   16   17   18
//   19   20   21   22   23   24   25
//   26   27   28   29   30   31
//
#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
  
  int startdaynum;
  //declaring Jalali Months Name as an array.
  string months[12] = {"Farvardin", "Ordibehesht",
  						"Khordad", "Tir" , "Mordad" ,
					    "Shahrivar","Mehr","Aabaan",
						"Aazar","Dey","Bahman" ,"Esfand"};
  
  //getting the first day of year from user.
  cout <<"Enter start day of the week " <<endl;
  cout <<" [0 = Shanbeh (Saturday) , 6 = Jomeh (Friday)]: ";
  cin >> startdaynum;
  
  cout<<endl<<endl;
  
  //for first day of every 31 days month we need to add 3 to the first day of the month befor
  //and for first day of every 30 days month we need to add 2 to the first day of the month befor.
  //as the first month of the year has 31 days and
  //the print loop will add 3 to that automatically we remove 3 from the input num of user
  startdaynum -= 3;
  
  //the print loop
  for(int counter =0; counter<12; counter++){
  	
  	cout <<"           "<<'"'<<months[counter]<<'"'<<endl;//prints the name of every month
  	
  	  cout<<"   Sat  Sun  Mon  Tue  Wed  Thu  Fri\n"<<endl;//prints the name of days of week
      
	  int monthdays =31;
      
	  if (counter==6){
          monthdays=30;//as second 6 months of year has 30 days.
          startdaynum+=2;//adding 2 to start day of last printed month for 30days months.
      }
	  else startdaynum+=3;//adding 3 to start day of last printed month for 31days months.
      
      if (startdaynum>6) startdaynum%=7;
      
      //declares the location of first day of month.
	  for(int i=0; i<startdaynum; i++)
	    cout <<"     ";
	    
	  //the day print loop.
	  for (int j=1; j<=monthdays; j++){
	    printf("%5d", j);

	    if ((startdaynum + j) % 7 == 0){
	    cout << "\n";
	    }
	  }
	  cout <<endl<<endl;
  }

  return(0);
}

