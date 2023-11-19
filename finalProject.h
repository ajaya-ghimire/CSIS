#ifndef _SET_H
#define _SET_H
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Set {

    private:
        vector<int> set;
        std::vector<int>::const_iterator it;
    public:
        Set() { }// empty constructor
       
        Set(vector<int> set) {
            this->set = set;
        }
        ~Set() {
            clean();
        }
        void clean() {
            set.clear();
        }

        bool isEmpty() {
            return (set.size() == 0);
        }

        int sizeOfSet() {
            return set.size();
        }

        void insert(int data) {
            if(search(data) != -1)
                cout << "data already in the set" << endl;
            else
                set.push_back(data);
        }



        int search(int key) {
            for(int i = 0; i < set.size(); i++) {
                if(set[i] == key)
                    return i;
            }
            return -1;
        }
        void print() {
            sort(set.begin(),set.end());
            for(int i = 0; i < set.size(); i++) {
                cout << set[i] << " ";
            }
            cout << endl;
        }
       



// For AUB
        Set operator+(Set otherSide) {
            vector<int> newVector;
            for(int i = 0; i < set.size(); i++) {
                newVector.push_back(set[i]);
            }
            for(int i = 0; i < otherSide.set.size(); i++) {
                newVector.push_back(otherSide.set[i]);
            }
            sort(newVector.begin(), newVector.end()); 
            it = std::unique(newVector.begin(), newVector.end());
            newVector.erase(it, newVector.end());
            return Set(newVector);
        }
        
        
        
        Set operator-(Set otherSide){
            
            sort(set.begin(),set.end());
            sort(otherSide.set.begin(), otherSide.set.end());
            std::vector<int> newVector;
            set_difference(set.begin(),set.end(),otherSide.set.begin(),otherSide.set.end(),
                                std::inserter(newVector,newVector.begin()));
            return Set(newVector);   
            
        }
        
        
        //For AnB
        Set operator*(Set otherSide) {
            sort(set.begin(),set.end());
            sort(otherSide.set.begin(), otherSide.set.end());
            std::vector<int> newVector;
            set_intersection(set.begin(),set.end(),otherSide.set.begin(),otherSide.set.end(),
                                std::inserter(newVector,newVector.begin()));
            return Set(newVector);
        }


};



#endif 