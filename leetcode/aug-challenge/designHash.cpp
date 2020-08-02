#include<bits/stdc++.h>

class HashSet{
    int n = 1000000;
    std::list<int>* hashTable;

    public:
        HashSet()
        {
            this -> hashTable = new std::list<int>[n];
        }
        int hash(int key);
        void add(int key);
        void remove(int key);
        bool contains(int key);

};

int HashSet::hash(int key){ return (key % n); }

void HashSet::add(int key)
{
    int index = hash(key);
    hashTable[index].push_back(key);
}

void HashSet::remove(int key)
{
    int index = hash(key);
    hashTable[index].remove(key);
}

bool HashSet::contains(int key)
{
    int index = hash(key);
    for(auto x : hashTable[index])
        if(x == key)
            return true;
    return false;
}

int main()
{


    return 0;
}
