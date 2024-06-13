class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int count=0;
        sort(seats.begin(),seats.end());
          sort(students.begin(),students.end());

        int i=0;
        int j=0;
        while(i<seats.size() && j<students.size())
        {
            if(seats[i]==students[j])
            {
                i++;
                j++;
            }
            else
            {
                int num=abs(seats[i]-students[j]);
                count=count+num;
                i++;
                j++;

            }

        }
        return count;
        
    }
};