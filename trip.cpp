#include"trip.h"
using namespace std;

Tripq::Tripq()
{
    q_node* rear= NULL;
}
Tripq::~Tripq()
{
    while(!rear)
    {
        q_node* temp;
        temp= rear->next;
        delete rear;
        rear= temp;
    }
}
int Tripq::add(data* viagem)
{
    return(enqueue(rear, viagem));
}
int Tripq::enqueue(q_node*& rear, data* viagem)
{
    q_node* temp= new q_node;
    temp->next= NULL;
    copy(temp, viagem);

    if(!rear)
    {
        temp->next= temp;
        rear= temp;
        temp= NULL;

        return 1;
    }

    else
    {
        temp->next= rear->next;
        rear->next= temp;
        rear= temp;
        temp= NULL;

        return 1;
    }
}

void Tripq::copy(q_node*& temp, data* viagem)
{
    temp->info->segment= new char[strlen(viagem->segment)+1];
    strcpy(temp->info->segment, viagem->segment);
    
    temp->info->transport= new char[strlen(viagem->transport)+1];
    strcpy(temp->info->transport, viagem->transport);
    
    temp->info->start= new char[strlen(viagem->start)+1];
    strcpy(temp->info->start, viagem->start);
    
    temp->info->end= new char[strlen(viagem->end)+1];
    strcpy(temp->info->end, viagem->end);
    
    temp->info->length= new char[strlen(viagem->length)+1];
    strcpy(temp->info->length, viagem->length);
    
    temp->info->recommend= new char[strlen(viagem->recommend)+1];
    strcpy(temp->info->recommend, viagem->recommend);
}

bool Tripq::displaylast()
{
    return(displaylast(rear));
}
bool Tripq::displaylast(q_node* rear)
{
    if(!rear)
        return 0;

    cout<<"*****************************"       <<'\n'
        <<'\t'<< '\t'<< rear->info->segment     <<'\n'
        <<'\t'<< '\t'<< rear->info->transport   <<'\n'
        <<'\t'<< '\t'<< rear->info->start       <<'\n'
        <<'\t'<< '\t'<< rear->info->end         <<'\n'
        <<'\t'<< '\t'<< rear->info.length       <<'\n'
        <<'\t'<< '\t'<< rear->info->recommend   <<'\n'
        <<"*****************************"       <<'\n'
        <<endl;

    return 1;
}


