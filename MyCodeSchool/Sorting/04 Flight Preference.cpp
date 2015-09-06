#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;



class Flight{
    
    private:
        string number;
        string departure;
        int duration;
        int price;
        
    public:
    
        Flight(){
            number = "";
            departure = "";
            duration = 0;
            price = 0;
        }
        Flight(string number, string departure, int duration, int price){
            this->number = number;
            this->departure = departure;
            this->duration = duration;
            this->price = price;
        }
    
        void set_number(string number){ this->number = number;}
        void set_departure(string departure){ this->departure = departure;;}
        void set_duration(int duration){ this->duration = duration;}
        void set_price(int price){ this->price = price;;}
        void set_flight(string number, string departure, int duration, int price){
            this->number = number;
            this->departure = departure;
            this->duration = duration;
            this->price = price;
        }
        
        string get_number() { return number; }
        string get_departure() { return departure; }
        int get_duration() { return duration; }
        int get_price() { return price; }
        
        bool operator < (const Flight &f){
            
            if(price < f.price)
                return true;
            else if(price == f.price && duration < f.duration)
                return true;
            else if(price == f.price && duration == f.duration && departure < f.departure)
                    return true;
            else
                false;
        }
        bool operator > (const Flight &b){
            return !(*this < b);
        }

};


template <class T> void insertion_sort(T *t, int size){
    for(int i = 1; i < size; i++){
        int position = i;
        while(position > 0 && t[position] < t[position - 1]){
            swap(t[position], t[position - 1]);
            position--;
        }
    }
}


int main()
{
    // Write your code here
    int cases;
    cin >> cases;
    while(cases--){
        int options;
        cin >> options;
        Flight flights[options];
        for(int i = 0; i < options; i++){
            string number, departure;
            int duration, price;
            cin >> number >> departure >> duration >> price;
            flights[i].set_flight(number,departure,duration,price);
        }
        
        insertion_sort(flights, options);
        
        for(int i = 0; i < 3; i++)
            cout << flights[i].get_number() << " ";
        cout << endl;
        
        
    }

    return 0;
}

