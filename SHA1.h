//
// Created by Marco on 6/9/2021.
//

#ifndef TAREA_EXTRACLASE_4_SHA1_H
#define TAREA_EXTRACLASE_4_SHA1_H

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Sha1 {

private:

    vector<int> X;
    int W[80];
    int A, B, C, D, E;
    int A1, B1, C1, D1, E1;
    int Turn;

public:

    int S(unsigned int x, int n);
    void Add(string m);
    void SetW(vector<int> m, int n);
    int GetT(int t);
    int GetK(int t);
    void AlgSha1(string text);

};


#endif //TAREA_EXTRACLASE_4_SHA1_H
