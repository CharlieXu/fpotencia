/* 
 * File:   Solution.h
 * Author: Santiago Peñate Vera
 *
 * Created on 8 de agosto de 2014, 10:43
 * Copyright (C) 2014 Santiago Peñate Vera
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#include <iostream>
#include "fpotencia_libs.h"

using namespace std;

namespace fPotencia {
#ifndef SOLUTION_H
#define	SOLUTION_H

    /*
     * This solution object with complex vectors is suited for methods like Jacobi
     * or Gauss-Seidel
     */
    class cx_solution {
    public:
        /*Properties*/
        cx_vec S;

        cx_vec V;

        bool initialized;

        uint Lenght;

        cx_solution();
        virtual ~cx_solution();

        void copy_from(cx_solution orig);

        void resize(int n);

        void print(string title);

        cx_vec getS();

        cx_vec getV();
        
        vec P();
        
        vec Q();
        
        double Pi(uint k);
        
        double Qi(uint k);

        double Vi(uint k);

        double Vr(uint k);

        mat getP();

    private:

    };

    /*
     * This type of separated vectors solution is good for solvers of the
     * Newton-Raphson type.
     */
    class solution {
    public:
        /*Properties*/
        vec P;

        vec Q;

        vec V;

        vec D;

        bool initialized;

        uint Lenght;

        solution();
        virtual ~solution();

        void copy_from(solution orig);

        void resize(int n);
        
        void clear();

        void print(string title);

        double Vi(uint k);

        double Vr(uint k);

        cx_double Vcx(uint k);

        cx_double Scx(uint k);

        cx_solution get_cx();
    private:

    };




#endif	/* SOLUTION_H */

}