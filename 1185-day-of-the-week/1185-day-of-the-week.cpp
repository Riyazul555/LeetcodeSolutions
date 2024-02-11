class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        if(month < 3){
            month += 12;
            year--;
        }

            int q = day;
            int m = month;
            int k = year % 100;
            int j = year / 100;

            int ans = (q + 13 * (m+1) /5 + k + k/4 + j/4 + 5*j) % 7;

            string days[] = {"Saturday" , "Sunday" , "Monday" , "Tuesday" , "Wednesday" ,"Thursday" , "Friday"};
            return days[ans];
    }
};