class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
          int totalBottles = numBottles;
          while(numBottles >= numExchange){
              int newbottles = numBottles / numExchange;
              totalBottles += newbottles;
              numBottles = newbottles + (numBottles % numExchange);
          }
          return totalBottles;
    }
};