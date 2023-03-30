#include<iostream>
using namespace std;

class cricketer {
  protected:
    string name;
    int age;

  public:
    void input_basic() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void display_basic() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class batsman: public cricketer {
  private:
    int total_runs;
    float average_runs;
    int best_performance;

  public:
    void input_data() {
        input_basic();
        cout << "Enter total runs: ";
        cin >> total_runs;
        cout << "Enter best performance: ";
        cin >> best_performance;
    }

    void calculate_average_runs() {
        average_runs = (float)total_runs / 10;
    }

    void display_data() {
        display_basic();
        cout << "Total runs: " << total_runs << endl;
        cout << "Average runs: " << average_runs << endl;
        cout << "Best performance: " << best_performance << endl;
    }
};

int main() {
    batsman b1;
    b1.input_data();
    b1.calculate_average_runs();
    b1.display_data();

    return 0;
}

