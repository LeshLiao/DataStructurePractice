#ifndef INSERT_H
#define INSERT_H

#include <stdio.h>
#include <stdlib.h>

#include "dataStruct.h"

struct node *createNewNode(int data);
void beginInsert(struct node **head);
void endInsert(struct node **head);
void positionInsert(struct node **head,int pos);

#endif
