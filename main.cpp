#include"trip.cpp"

using namespace std;



    void getinfo(data*& viagem);

int main()
{


    //variables 
    int decision= 0;
    Tripq fila;
    //data trip;


    do
    {
        cout<<'\n'
            <<'\t'<<'\t'<<"================================================"<<'\n'
            <<'\t'<<'\t'<<"                  Main menu"                     <<'\n'
            <<'\t'<<'\t'<<"------------------------------------------------"<<'\n'
            <<'\t'<<'\t'<<"1-Plan your trip "                               <<'\n'
            <<'\t'<<'\t'<<"2-Exit"                                          <<'\n'
            <<'\t'<<'\t'<<"------------------------------------------------"<<'\n'
            <<'\t'<<'\t'<<"================================================"<<endl;
        
        cin>>decision;
        cin.ignore();
             
        switch(decision)
        {
            case 1://Enqueue
            {
                data* viagem= new data;
                getinfo(viagem);
                fila.add(viagem);
                fila.displaylast();
                
                break;
            }

            case 2: //show current
            {
                cout<< "Thank you for using this program! "<<endl;
                break;
            }
        }

    }while(decision != 2);
    return 0;
}

void getinfo(data*& viagem)
{
    const int SIZE= 100;
    char input1 [SIZE];
    char input2 [SIZE];
    char input3 [SIZE];
    /*char* segment;
    char* transport;
    char* start;
    char* end;
    char* length;
    char * recommend;*/

    cout<< '\t'<< "What is the segment?" <<endl;
    cin.get(input1, SIZE, '\n');
    cin.ignore(SIZE, '\n');

    cout<< '\t'<< "What is the transport?" <<endl;
    cin.get(input2, SIZE, '\n');
    cin.ignore(SIZE, '\n');

    cout<< '\t'<< "What is the starting point?" <<endl;
    cin.get(input3, SIZE, '\n');
    cin.ignore(SIZE, '\n');

    viagem->segment= new char [strlen(input1)+1];
    strcpy(viagem->segment, input1);

    viagem->transport= new char [strlen(input2)+1];
    strcpy(viagem->transport, input2);

    viagem->start= new char [strlen(input3)+1];
    strcpy(viagem->start, input3);

}

