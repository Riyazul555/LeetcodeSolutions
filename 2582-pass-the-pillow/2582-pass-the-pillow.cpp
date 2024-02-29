class Solution {
public:
    int passThePillow(int n, int time) {
        int person = 1;
        bool direction = true;

        for(int i=1;i<=time;++i){
            if(direction){
                person++;
            }
            else{
                person--;
            }

            if(person==1 || person==n){
                direction =! direction;
            }
        }
        return person;
    }
};