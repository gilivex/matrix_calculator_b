// #include <iostream>
// using namespace std;
// #include <fstream>
// #include <sstream>
// #include <stdexcept>
// #include "Matrix.hpp"
// using namespace zich;
// #include "doctest.h"

// static vector<double>vec = {3,0.5,9,2,5,7,1.7,0.5,6,8,2.3,4.6};
// static Matrix M(vec,3,4);
// static vector<double>v = {4,2,3.2,1,0,1,7,3.5,2.2,3.3,9,5};
// static Matrix T(v,3,4);
// static vector<double>x = {2,1,4.2,3,7,8.1,1.2,9};
// static Matrix X(v,4,2);
// static Matrix error1(v,4,3);
// static Matrix error2(v,2,6);
//        Matrix res(v,3,4);

// TEST_CASE("good +"){
//     vector<double> result = {7,2.5,12.2,3,5,8,8.7,4,8.2,11.3,11.3,9.6};
//     Matrix res(result,3,4);
//     CHECK((M+T)==res);
// }
// TEST_CASE("bad +"){
//     CHECK_THROWS(M+error1);
//     CHECK_THROWS(M+error2);
// }
// TEST_CASE("good_unari +"){
//     CHECK((+M)==M);
//     CHECK((+T) == T);
// }

// TEST_CASE("good +="){
//     vector<double> result = {7,2.5,12.2,3,5,8,8.7,4,8.2,11.3,11.3,9.6};
//     Matrix res(result,3,4);
//     CHECK_NOTHROW(M+=T);
//     CHECK(M==res);
// }
// TEST_CASE("bad +="){
//     CHECK_THROWS(M+=error1);
//     CHECK_THROWS(M+=error2);
// }
// TEST_CASE("good ++(prefix)"){
//     vector<double> result = {4,1.5,10,3,6,8,2.7,1.5,7,9,3.3,5.6};
//     Matrix res(result,3,4);
//     CHECK((++M)==res);
// }
// TEST_CASE("good ++(postfix)"){
//     vector<double> result = {4,1.5,10,3,6,8,2.7,1.5,7,9,3.3,5.6};
//     Matrix res(result,3,4);
//     CHECK((M++)==M);
//     CHECK(M==res);
// }

// /////////////////minus Check////////////////////////
// TEST_CASE("good -"){
//     vector<double> result = {-1,-1.5,5.8,1,5,6,-5.3,-3,3.8,4.7,-6.7,-0.4}   ;
//     Matrix res(result,3,4);
//             CHECK((M-T)==res);
// }
// TEST_CASE("bad -"){
//     CHECK_THROWS(M-error1);
//     CHECK_THROWS(M-error2);
// }
// TEST_CASE("good_unari -"){
// //    vector<double> result = {-alll nums}
// //    Matrix res(result,3,4);
//             CHECK((-M)==res);
//             CHECK((-T) ==-T);
// }

// TEST_CASE("good -="){
//     vector<double> result = {-1,-1.5,5.8,1,5,6,-5.3,-3,3.8,4.7,-6.7,-0.4};
//     Matrix res(result,3,4);
//     CHECK_NOTHROW(M-=T);
//             CHECK(M==res);
// }
// TEST_CASE("bad -="){
//     CHECK_THROWS(M-=error1);
//     CHECK_THROWS(M-=error2);
// }
// TEST_CASE("good --(prefix)"){
//     vector<double> result = {2,-0.5,8,1,1,6,-0.7,-0.5,5,7,1.3,4.6};
//     Matrix res(result,3,4);
//             CHECK((--M)==res);
// }
// TEST_CASE("good --(postfix)"){
//     vector<double> result = {2,-0.5,8,1,1,6,-0.7,-0.5,5,7,1.3,4.6};
//     Matrix res(result,3,4);
// //            CHECK((M--)==result);
//             CHECK(M==res);
// }
// ///////////////////////// multiplex Check//////////////////////////////
// TEST_CASE("good scalar*M") {
//     int scalar = 3;
//     vector<double> result = {9, 1.5, 27, 6, 15, 21, 5.1, 1.5, 18, 24, 6.9, 13.8};
//     Matrix res(result, 3, 4);
//             CHECK((scalar * M) == res);
// }
// TEST_CASE("good M*scalar"){
//         int scalar = 3;
//         vector<double> result = {9,1.5,27,6,15,21,5.1,1.5,18,24,6.9,13.8};
//         Matrix res(result,3,4);
//                 CHECK((M*scalar)==res);
// }
// TEST_CASE("good *"){
//     vector<double> result = {74,95.4,51.9,44.27,67.92,90.03};
//     Matrix res(result,3,2);
//             CHECK((M*T)==res);
// }
// TEST_CASE("*="){
//     vector<double> result = {74,95.4,51.9,44.27,67.92,90.03};
//     Matrix res(result,3,2);
//     CHECK_NOTHROW(M*=T);
//             CHECK(M==res);
// }
// TEST_CASE("bad *="){
//     CHECK_THROWS(M*=error1);
//     CHECK_THROWS(M*=error2);
// }
// TEST_CASE("<"){

// }

// TEST_CASE("<="){

// }

// TEST_CASE(">"){

// }

// TEST_CASE(">="){

// }
// TEST_CASE("="){

// }
// TEST_CASE("!="){

// }






// //                                        student 1:

// #include <iostream>
// #include <stdlib.h>
// #include <string>
// #include "doctest.h"
// #include <vector>
// #include "Matrix.hpp"
// #include <cmath>

// using namespace std;
// namespace zich{ 

// const int ten = 10;

// TEST_CASE("Case: Invalid multiplication and amount"){
//     vector<double> identity_3 = {1,0,0,0,1,0,0,0,1};//3x3
//     vector<double> vec1 = {1,1,1,1,1,1,1,1,1};//3x3
//     vector<double> arr = {2,1,1,1,2,1,1,1,2};//3x3   arr = identity_3 + vec1
//     vector<double> vec2 = {1,0,0,0,0,1,0,0,0,0,1,0};//3x4
//     vector<double> identity_4 = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};//4x4
//     Matrix mat1(identity_3,3,3);
//     Matrix mat2(vec2,3,4);
//     Matrix mat3(identity_4,4,4);
//     Matrix mat4_arr(arr,3,3);
//     CHECK_THROWS((mat2*mat1));
//     CHECK_THROWS(mat3*mat2);
//     CHECK_THROWS(mat2*mat2);
//     CHECK_THROWS(mat4_arr*mat3);
//     CHECK_THROWS(mat2*mat4_arr);
//     for (double i = 0; i < 500; i++)
//     {
//     vector<double> arr1 = {i, i+1, i+2, i+3};//2x2
//     vector<double> arr2 = {i,i,i,i,i,i,i,i,i};//3x3
//     vector<double> arr = {i};//1x1
//     Matrix mat1(arr1,2,2);
//     Matrix mat2(arr2,3,3);
//     Matrix mat(arr,1,1);
//     CHECK_THROWS(mat1*mat2);
//     CHECK_THROWS(mat2*mat1);
//     CHECK_THROWS(mat2+mat1);  
//     CHECK_THROWS(mat1+mat2);
//     CHECK_THROWS(mat+mat2);
//     CHECK_THROWS(mat1+mat);
//     CHECK_THROWS(mat2*mat);      
//     }

//     for (double i = 0; i < ten; i++)
//     {
//     vector<double> arr1 = {i, i+1, i+2, i+3};//2x2
//     for(double j=0; j<ten; j++){
//     vector<double> arr2 = {j};//1x1
//     Matrix mat1(arr1,2,2);
//     Matrix mat2(arr2,1,1);
//     CHECK_THROWS(mat2*mat1);
//     CHECK_THROWS(mat1*mat2);
//     }     
//     }
// }
// TEST_CASE("Case: Invalid Subtraction matrix"){
//     for (double i = 0; i < 500; i++)
//     {
//     vector<double> arr1 = {i, i+1, i+2, i+3};//2x2
//     vector<double> arr2 = {i,i,i,i,i,i,i,i,i};//3x3
//     Matrix mat1(arr1,2,2);
//     Matrix mat2(arr2,3,3);
//     CHECK_THROWS(mat1-mat2);
//     CHECK_THROWS(mat2-mat1);  
//     }
// }

// TEST_CASE("matrix multiplication"){
//     vector<double> identity_3 = {1,0,0,0,1,0,0,0,1};//3x3
//     Matrix mat_identity_3(identity_3,3,3);
//     vector<double> vec1 = {1,1,1,1,1,1,1,1,1};//3x3
//     vector<double> arr = {2,1,1,1,2,1,1,1,2};//3x3   arr = identity_3 + vec1
//     vector<double> vec2 = {1,0,0,0,0,1,0,0,0,0,1,0};//3x4
//     vector<double> identity_4 = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};//4x4
//     vector<double> _vec_ = {1,1,1,1,1,1,1,1,1,1,1,1};//4x3
//     Matrix _mat_(_vec_, 4, 3);
//     Matrix mat1(vec1, 3,3);
//     Matrix mat_arr(arr,3,3);
//     Matrix mat2(vec2,3,4);
//     Matrix mat_identity_4(identity_4,4,4);

//     CHECK(((mat1*mat_identity_3) == mat1));
//     CHECK(((mat_identity_3*mat1) == mat1));
//     CHECK(((mat2*mat_identity_4) == mat2));
//     CHECK(((mat1+mat_identity_3) == mat_arr));
//     CHECK(((mat2*_mat_) == mat1));

//     for (double i = 1; i < 500; i++)
//     {
//         int random = rand() % 1000;
//         vector<double> vec1 = {i*random,i*random,i*random,i*random,i*random,i*random,i*random,i*random,i*random};
//         Matrix matrix(vec1, 3, 3);
//         CHECK(((matrix * mat_identity_3) == matrix));

//         vector<double> arr1 = {i,i,i,i,i,i,i,i,i};//3x3

//         vector<double> arr = {pow(i,2),pow(i,2),pow(i,2),pow(i,2),pow(i,2),pow(i,2),pow(i,2),pow(i,2),pow(i,2)};//3x3
//         Matrix mat1(arr1, 3, 3);
//         Matrix mat(arr, 3, 3);
//         CHECK(((mat1*mat1) != mat));
//         CHECK(((mat_identity_3*mat_identity_3) == mat_identity_3));
//     }
// }


// TEST_CASE("Comparisons between matrices"){

//     for (double i = 1; i < 500; i++)
//     {
//         vector<double> vec1 = {i,i,i,i};//2x2
//         vector<double> identity_2 = {i,0,0,i};//2x2
//         vector<double> vec_ = {i,i,i,i,i,i,i,i,i};//3x3
//         Matrix mat(vec1,2,2);
//         Matrix mat_identity_2(identity_2,2,2);
//         Matrix mat_(vec_,3,3);
//         CHECK((mat > mat_identity_2));
//         CHECK((mat >= mat_identity_2));
//         CHECK((mat != mat_identity_2));
//         CHECK((mat_identity_2 < mat));
//         CHECK((mat_identity_2 <= mat));

//         CHECK_THROWS(bool ans = (mat < mat_));
//         CHECK_THROWS(bool ans = (mat <= mat_));
//         CHECK_THROWS(bool ans = (mat == mat_));
//         CHECK_THROWS(bool ans = (mat >= mat_));
//         CHECK_THROWS(bool ans = (mat > mat_));
//         CHECK_THROWS(bool ans = (mat != mat_));

//     }
// }
// TEST_CASE("Subtraction and amount"){
//     int k=1;
//     vector<double> identity_3 = {1,0,0,0,1,0,0,0,1};//3x3
//     Matrix mat_identity_3(identity_3,3,3);
//     int random = rand() % 1000;
//     for (double i = 0; i < 500; i++)
//     {
//         vector<double> vec1 = {i*random,i*random,i*random,i*random,i*random,i*random,i*random,i*random,i*random};
//         Matrix matrix(vec1, 3, 3);

//         vector<double> vec = {i*random+k,i*random+k,i*random+k,i*random+k,i*random+k,i*random+k,i*random+k,i*random+k,i*random+k};
//         Matrix mat(vec, 3, 3);

//         vector<double> vec1_minus = {-i*random,-i*random,-i*random,-i*random,-i*random,-i*random,-i*random,-i*random,-i*random};
//         Matrix matrix_minus(vec1_minus, 3, 3);
        
//         vector<double> vec_sub = {i*random-k,i*random,i*random,i*random,i*random-k,i*random,i*random,i*random,i*random-k};
//         Matrix matrix_sub(vec_sub, 3, 3);

//         vector<double> vec_ = {i*random-k,i*random-k,i*random-k,i*random-k,i*random-k,i*random-k,i*random-k,i*random-k,i*random-k};
//         Matrix matrix_(vec_, 3, 3);

//         CHECK(((+matrix) != matrix_sub));
//         CHECK(((matrix - mat_identity_3) == matrix_sub));
//     }
// }
// TEST_CASE("CHECK ++ and -- operators"){
//     int k=1;
//     int random = rand() % 1000;
//     for (double i = 0; i < 500; i++)
//     {
//         vector<double> vec1 = {i*random,i*random,i*random,i*random,i*random,i*random,i*random,i*random,i*random};
//         Matrix matrix(vec1, 3, 3);

//         vector<double> v = {i*random,i*random,i*random,i*random,i*random,i*random,i*random,i*random,i*random};
//         Matrix matrix_v(v, 3, 3);

//         vector<double> vec = {i*random+k,i*random+k,i*random+k,i*random+k,i*random+k,i*random+k,i*random+k,i*random+k,i*random+k};
//         Matrix mat(vec, 3, 3);

//         vector<double> vec1_minus = {-i*random,-i*random,-i*random,-i*random,-i*random,-i*random,-i*random,-i*random,-i*random};
//         Matrix matrix_minus(vec1_minus, 3, 3);
        
//         vector<double> vec_sub = {i*random-k,i*random,i*random,i*random,i*random-k,i*random,i*random,i*random,i*random-k};
//         Matrix matrix_sub(vec_sub, 3, 3);

//         vector<double> vec_ = {i*random-k,i*random-k,i*random-k,i*random-k,i*random-k,i*random-k,i*random-k,i*random-k,i*random-k};
//         Matrix matrix_(vec_, 3, 3);
//         CHECK(((matrix++) == matrix_v));
//         CHECK(((matrix--) == mat));
//         CHECK(((++matrix) == mat));
//         ++matrix;
//         CHECK(((--matrix) == mat));
//     }
// }
// }







//                                  student 2:


// Created by Amit Melamed on 02/04/2022.

// #include "doctest.h"
// #include "Matrix.hpp"

// using namespace std;
// using namespace zich;
// TEST_CASE ("ADD/SUB/MULTY") {
//     vector<double> vector;
//     for (double i = 0; i < 100; ++i) {
//         vector.push_back(i);
//     }
//     /**
//      * Here we will check adding,substructing of 2 different shape matrix.
//      * we can add and substruct A and B if and only if the two matrix have same rows and cols size.
//      */
//     Matrix A{vector, 10, 10};
//     Matrix B{vector, 5, 20};
//     CHECK_THROWS(A + B);
//     CHECK_THROWS(B + A);
//     CHECK_THROWS(A - B);
//     CHECK_THROWS(B - A);
//     CHECK_THROWS(A += B);
//     CHECK_THROWS(B += A);
//     CHECK_THROWS(A -= B);
//     CHECK_THROWS(B -= A);
//     /**
//      * A and B can be multiply if and only if:
//      * A is n*m matrix
//      * B is m*k matrix
//      */
//     vector.clear();
//     for (double i = 0; i < 30; ++i) {
//         vector.push_back(i);
//     }
//     Matrix C{vector, 5, 6};
//     vector.clear();
//     for (double i = 0; i < 60; ++i) {
//         vector.push_back(i);
//     }
//     Matrix D{vector, 6, 10};
//     //A is 10*10
//     //B is 5*20
//     //C is 5*6
//     //D is 6*10
//     // only A*A, D*A and C*D are allowed
//     CHECK_NOTHROW(A * A);
//     CHECK_THROWS(A * B);
//     CHECK_THROWS(A * C);
//     CHECK_THROWS(A * D);
//     CHECK_THROWS(B * A);
//     CHECK_THROWS(B * B);
//     CHECK_THROWS(B * C);
//     CHECK_THROWS(B * D);
//     CHECK_THROWS(C * A);
//     CHECK_THROWS(C * B);
//     CHECK_THROWS(C * C);
//     CHECK_NOTHROW(C * D);
//     CHECK_NOTHROW(D * A);
//     CHECK_THROWS(D * B);
//     CHECK_THROWS(D * C);
//     CHECK_THROWS(D * D);
//     CHECK_NOTHROW(A *= A);
//     CHECK_THROWS(A *= B);
//     CHECK_THROWS(A *= C);
//     CHECK_THROWS(A *= D);
//     CHECK_THROWS(B *= A);
//     CHECK_THROWS(B *= B);
//     CHECK_THROWS(B *= C);
//     CHECK_THROWS(B *= D);
//     CHECK_THROWS(C *= A);
//     CHECK_THROWS(C *= B);
//     CHECK_THROWS(C *= C);
//     CHECK_NOTHROW(C *= D);
//     CHECK_NOTHROW(D *= A);
//     CHECK_THROWS(D *= B);
//     CHECK_THROWS(D *= C);
//     CHECK_THROWS(D *= D);
// }

// TEST_CASE ("Equality between two matrix's") {
//     /**
//      * Given 2 matrix's A and B
//      * Matrix A and Matrix B will call equal if and only if all their numbers equals.
//      * Matrix A will be called bigger than B if and only if the sum of the parts of A biggers then parts of B.
//      * If matrix A and B not from the same shape (different rows and cols size)-an error should be thrown.
//      * If the sum of A and B is equal but not all of their numbers are equal- A are not equal to B.
//      */
//     SUBCASE("Two equal matrix") {
//         vector<double> vectorA = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//         vector<double> vectorB = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//         Matrix A{vectorA, 3, 3};
//         Matrix B{vectorB, 3, 3};
//         CHECK_EQ(A == B, true);
//         CHECK_EQ(A != B, false);
//         CHECK_EQ(A < B, false);
//         CHECK_EQ(A > B, false);
//         CHECK_EQ(A <= B, true);
//         CHECK_EQ(A >= B, true);
//     }

//     SUBCASE("A and B is in the same shape, but B is bigger") {
//         vector<double> vectorA = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//         vector<double> vectorB = {9, 9, 9, 9, 9, 9, 9, 9, 9};
//         Matrix A{vectorA, 3, 3};
//         Matrix B{vectorB, 3, 3};
//         CHECK_EQ(A == B, false);
//         CHECK_EQ(A != B, true);
//         CHECK_EQ(A < B, true);
//         CHECK_EQ(A > B, false);
//         CHECK_EQ(A <= B, true);
//         CHECK_EQ(A >= B, false);
//     }
//     SUBCASE("A and B is in the same shape, but A is bigger") {
//         vector<double> vectorA = {10, 20, 30, 40, 50, 60, 70, 80, 90,100,110,120};
//         vector<double> vectorB = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12};
//         Matrix A{vectorA, 3, 4};
//         Matrix B{vectorB, 3, 4};
//         CHECK_EQ(A == B, false);
//         CHECK_EQ(A != B, true);
//         CHECK_EQ(A < B, false);
//         CHECK_EQ(A > B, true);
//         CHECK_EQ(A <= B, false);
//         CHECK_EQ(A >= B, true);
//         //Now we will multy B by 10 and A==B
//         B=B*10;
//         CHECK_EQ(B==A, true);

//         CHECK_EQ(B==A, true);
//         A*=10;
//         B=B*5;
//         B=B*2;
//         CHECK_EQ(B==A, true);
//     }
// }
// /**
//  * In this test case we will check our calculation work.
//  * we will check adding,substructing and multiplication functions.
//  */
// TEST_CASE("Calculation work"){
//     vector<double> vectorA = {1, 2, 3, 4,
//                               5, 6, 7, 8,
//                               9,10,11,12};
//     vector<double> vectorB = {1, 2, 3,
//                               4, 5, 6,
//                               7, 8, 9,
//                               10,11,12};
//     //A*B==C
//     vector<double> vectorC = {70, 80, 90,
//                               158, 184, 210,
//                               246, 288, 330};
//     //B*A=D
//     vector<double > vectorD={38,44,50,56,
//                              83,98,113,128,
//                              128,152,176,200,
//                              173,206,239,272};
//     vector<double> vectorI_3={1,0,0,
//                               0,1,0,
//                               0,0,1};
//     vector<double> vectorI_4={1,0,0,0,
//                               0,1,0,0,
//                               0,0,1,0,
//                               0,0,0,1};
//     vector<double > vector_zero_3={0,0,0,
//                                    0,0,0,
//                                    0,0,0};
//     vector<double > vector_zero_4={0,0,0,0,
//                                    0,0,0,0,
//                                    0,0,0,0,
//                                    0,0,0,0};
//     vector<double> vector_one_3={1,1,1,
//                                  1,1,1,
//                                  1,1,1};
//     vector<double> vector_one_4={1,1,1,1,
//                                  1,1,1,1,
//                                  1,1,1,1,
//                                  1,1,1,1};


//     Matrix A{vectorA, 3, 4};
//     Matrix B{vectorB, 4, 3};
//     Matrix C{vectorC,3,3};
//     Matrix D{vectorD,4,4};
//     Matrix I_3{vectorI_3,3,3};
//     Matrix I_4{vectorI_4,4,4};
//     Matrix zero_3{vector_zero_3,3,3};
//     Matrix zero_4{vector_zero_4,4,4};
//     Matrix oneMatrix_3{vector_one_3,3,3};
//     Matrix oneMatrix_4{vector_one_4,4,4};




//     CHECK_EQ((A*B)==C, true);
//     CHECK_EQ((B*A)==D, true);
//     //every matrix * the I matrix should be equal to itself.
//     CHECK_EQ((C*I_3)==C, true);
//     CHECK_EQ((D*I_4)==D, true);
//     //every matrix * the ZERO matrix is equal to zero matrix.
//     CHECK_EQ((C*zero_3)==zero_3, true);
//     CHECK_EQ((D*zero_4)==zero_4, true);
//     //every matrix + zero matrix equal to itself.
//     CHECK_EQ((C+zero_3)==C, true);
//     CHECK_EQ((D+zero_4)==D, true);
//     //every matrix - zero matrix equal to itself.
//     CHECK_EQ((C-zero_3)==C, true);
//     CHECK_EQ((D-zero_4)==D, true);
//     CHECK_EQ((D-D)==zero_4, true);
//     CHECK_EQ((C-C)==zero_3, true);
//     //zero matrix ++ should be equal to one matrix
//     zero_3++;
//     ++zero_4;
//     CHECK_EQ(zero_3==oneMatrix_3,true);
//     CHECK_EQ(zero_4==oneMatrix_4,true);
// }


// /**
//  * matrix size should be m*n integers:
//  * m>0,n>0.
//  * numbers array size should be n*m.
//  */
// TEST_CASE("Bad input in Constructor"){
//     vector<double> arr={1,2,3,4,5,6,7,8,9,10,11,12};
//     CHECK_NOTHROW(Matrix m(arr,3,4));
//     CHECK_NOTHROW(Matrix m(arr,4,3));
//     CHECK_NOTHROW(Matrix m(arr,2,6));
//     CHECK_NOTHROW(Matrix m(arr,6,2));
//     CHECK_NOTHROW(Matrix m(arr,1,12));
//     CHECK_NOTHROW(Matrix m(arr,12,1));
//     // m and n positive integers,but m*n!=arr.size
//     CHECK_THROWS(Matrix m(arr,10,10));
//     CHECK_THROWS(Matrix m(arr,3,3));
//     CHECK_THROWS(Matrix m(arr,4,4));
//     CHECK_THROWS(Matrix m(arr,4,10));
//     CHECK_THROWS(Matrix m(arr,10,3));
//     // m*n==arr.size but m and n negative
    
//     CHECK_THROWS(Matrix m(arr,-3,-4));
//     CHECK_THROWS(Matrix m(arr,-4,-3));
//     CHECK_THROWS(Matrix m(arr,-2,-6));
//     CHECK_THROWS(Matrix m(arr,-6,-2));
//     CHECK_THROWS(Matrix m(arr,-1,-12));
//     CHECK_THROWS(Matrix m(arr,-12,-1));
//     //negative numbers and zero
//     CHECK_THROWS(Matrix m(arr,-4,3));
//     CHECK_THROWS(Matrix m(arr,4,-3));
//     CHECK_THROWS(Matrix m(arr,0,-3));
//     CHECK_THROWS(Matrix m(arr,-3,0));
//     CHECK_THROWS(Matrix m(arr,0,0));
//     CHECK_THROWS(Matrix m(arr,0,3));
//     CHECK_THROWS(Matrix m(arr,3,0));
// }


// TEST_CASE("bad input in functions"){
//     vector<double> arr={1,2,3,4,5,6,7,8,9,10,11,12};
//     Matrix A(arr,4,3);
//     Matrix B(arr,2,6);
//     CHECK_THROWS(A*B);
//     CHECK_THROWS(B*A);
//     CHECK_THROWS(A+B);
//     CHECK_THROWS(A-B);
//     CHECK_THROWS(B-A);
//     CHECK_THROWS(B+A);
//     Matrix C(arr,3,4);
//     CHECK_NOTHROW(A*C);
//     CHECK_NOTHROW(C*A);
//     CHECK_THROWS(A+C);
//     CHECK_THROWS(A-C);
//     CHECK_THROWS(C-A);
//     CHECK_THROWS(C+A);
//     CHECK_THROWS(A*=B);
//     CHECK_THROWS(B*=A);
//     CHECK_THROWS(A+=B);
//     CHECK_THROWS(A-=B);
//     CHECK_THROWS(B-=A);
//     CHECK_THROWS(B+=A);
//     CHECK_NOTHROW(A*=C);
//     CHECK_NOTHROW(C*=A);
//     CHECK_THROWS(A+=C);
//     CHECK_THROWS(A-=C);
//     CHECK_THROWS(C-=A);
//     CHECK_THROWS(C+=A);
// }





//                       student 2:

#include "doctest.h"
#include "Matrix.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;
using namespace zich;

std::vector<double> arr1 = {-1, 0, 0, 0, -1, 0, 0, 0, -1};
std::vector<double> unit_matrix = {1, 0, 0, 0, 1, 0, 0, 0, 1};
std::vector<double> arr_b = {3, 0, 0, 0, 3, 0, 0, 0, 3};
std::vector<double> arr_c = {2, 0, 0, 0, 2, 0, 0, 0, 2};
std::vector<double> arr_d= {4, 0, 0, 0, 4, 0, 0, 0, 4};
std::vector<double> arr_e= {4, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0};
std::vector<double> arr_f= {5, 0, 0, 0, 5, 0, 0, 0, 5, 0, 0, 0};
std::vector<double> arr_h= {9, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0};

std::vector<double> arr1_1 = {0, 1, 1, 1, 0, 1, 1, 1,0};
std::vector<double> unit_matrix_1 = {2, 1, 1, 1, 2, 1, 1, 1, 2};
std::vector<double> arr_b_1 = {4, 1, 1, 1, 4, 1, 1, 1, 4};
std::vector<double> arr_c_1 = {3, 1, 1, 1, 3, 1, 1, 1, 3};
std::vector<double> arr_d_1= {5, 1, 1, 1, 5, 1, 1, 1, 5};
std::vector<double> arr_e_1= {5, 1, 1, 1, 5, 1, 1, 1, 5, 1, 1, 1};
std::vector<double> arr_f_1= {6, 1, 1, 1, 6, 1, 1, 1, 6, 1, 1, 1};
std::vector<double> arr_h_1= {10, 1, 1,1, 10, 1, 1, 1, 10, 1, 1, 1};

Matrix mat_un{arr1,3,3};
Matrix mat1{unit_matrix,3,3};
Matrix mat2{arr_b,3,3};
Matrix mat3{arr_c,3,3};
Matrix mat4{arr_d,3,3};
Matrix mat5{arr_e,4,3};
Matrix mat6{arr_f,4,3};
Matrix mat7{arr_h,4,3};

Matrix mat_un_1{arr1_1,3,3};
Matrix mat1_1{unit_matrix_1,3,3};
Matrix mat2_2{arr_b_1,3,3};
Matrix mat3_3{arr_c_1,3,3};
Matrix mat4_4{arr_d_1,3,3};
Matrix mat5_5{arr_e_1,4,3};
Matrix mat6_6{arr_f_1,4,3};
Matrix mat7_7{arr_h_1,4,3};

std::vector<double> arr_cin = {1, 1, 1, 1, 1, 1, 1, 1, 1,1,1,1};
Matrix mat_cin{arr_cin,3,4};

bool equalto = false;

TEST_CASE("function + binary matrix and matrix"){

    CHECK_EQ(mat2,mat1+mat3);
    CHECK_EQ(mat3,mat1+mat1);
    CHECK_EQ(mat2,mat1+mat1+mat1);
    CHECK_EQ(mat4,mat1+mat1+mat1+mat1);
    CHECK_EQ(mat4,mat1+mat1+mat3);
    CHECK_EQ(mat4,mat1+mat2);
    CHECK_EQ(mat4,mat3+mat3);

    CHECK_THROWS(mat1+mat5);
    CHECK_THROWS(mat2+mat6);
    CHECK_THROWS(mat3+mat5);
    CHECK_THROWS(mat4+mat6);

    CHECK_NOTHROW(mat5+mat6);
}

TEST_CASE("function += binary matrix and matrix"){
    mat1+=mat3;
    CHECK_EQ(mat2,mat1);
    mat2+=mat1;
    mat4+=mat3;
    CHECK_EQ(mat4,mat2);
    mat1+=mat1;
    CHECK_EQ(mat1,mat2);
    mat1+= mat3;
    mat3+= mat2;
    CHECK_EQ(mat3,mat1);
    mat5+=mat6;
    CHECK_EQ(mat5,mat7);

    CHECK_THROWS(mat5+=mat4);
    CHECK_THROWS(mat6+=mat4);
    CHECK_THROWS(mat7+=mat4);
    CHECK_THROWS(mat5+=mat3);
    CHECK_THROWS(mat6+=mat3);
}

TEST_CASE("function + unary"){
    CHECK_EQ(mat1,+mat1);
}

TEST_CASE("function - binary matrix and matrix"){
    CHECK_EQ(mat2-mat4,mat1-mat3);
    CHECK_EQ(mat4,mat1-mat3+mat2);
    CHECK_EQ(mat3,mat1-mat2+mat4);
    
    CHECK_THROWS(mat1-mat5);
    CHECK_THROWS(mat2-mat6);
    CHECK_THROWS(mat3-mat7);
    CHECK_THROWS(mat4-mat5-mat7);
}

TEST_CASE("function -= binary matrix and matrix"){
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    mat3-=mat1;
    CHECK_EQ(mat1,mat3);
    mat2-=mat3;
    mat1+=mat3;
    CHECK_EQ(mat1,mat2);
    mat4-=mat2;
    CHECK_EQ(mat4,mat2);
    mat4+=mat1;
    mat4-=mat3;
    mat3+=mat1;
    CHECK_EQ(mat4,mat3);
    mat7-=mat6;
    CHECK_EQ(mat7,mat5);

    CHECK_THROWS(mat5-=mat4);
    CHECK_THROWS(mat6-=mat4);
    CHECK_THROWS(mat7-=mat4);
    CHECK_THROWS(mat5-=mat1);
    CHECK_THROWS(mat5-=mat2);
    CHECK_THROWS(mat3-=mat7);

}

TEST_CASE("function - unary"){
    Matrix mat1{unit_matrix,3,3};
    CHECK_EQ(-mat1,mat_un);
}

TEST_CASE("function < binary"){
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    CHECK_EQ(true,mat1<mat2);
    CHECK_EQ(true,mat1<mat3);
    CHECK_EQ(true,mat1<mat4);
    CHECK_EQ(true,mat2<mat4);
    CHECK_EQ(true,mat3<mat2);
    CHECK_EQ(true,mat3<mat4);

    CHECK_EQ(true,mat5<mat6);
    CHECK_EQ(true,mat6<mat7);
    CHECK_EQ(true,mat5<mat7);

    CHECK_EQ(false,mat2<mat1);
    CHECK_EQ(false,mat3<mat1);
    CHECK_EQ(false,mat4<mat1);
    CHECK_EQ(false,mat4<mat2);
    CHECK_EQ(false,mat2<mat3);
    CHECK_EQ(false,mat4<mat3);

    CHECK_EQ(false,mat6<mat5);
    CHECK_EQ(false,mat7<mat6);
    CHECK_EQ(false,mat7<mat5);

    CHECK_EQ(false,mat1<mat1);
    CHECK_EQ(false,mat2<mat2);
    CHECK_EQ(false,mat3<mat3);
    CHECK_EQ(false,mat4<mat4);
    CHECK_EQ(false,mat5<mat5);
    CHECK_EQ(false,mat6<mat6);
    CHECK_EQ(false,mat7<mat7);

    CHECK_THROWS(equalto =(mat4<mat7));
    CHECK_THROWS(equalto =(mat4<mat5));
    CHECK_THROWS(equalto =(mat4<mat6));
    CHECK_THROWS(equalto =(mat1<mat7));
    CHECK_THROWS(equalto =(mat2<mat7));
    CHECK_THROWS(equalto =(mat3<mat7));
    CHECK_THROWS(equalto =(mat4<mat5));
}

TEST_CASE("function <= binary"){
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    CHECK_EQ(true,mat1<=mat2);
    CHECK_EQ(true,mat1<=mat3);
    CHECK_EQ(true,mat1<=mat4);
    CHECK_EQ(true,mat2<=mat4);
    CHECK_EQ(true,mat3<=mat2);
    CHECK_EQ(true,mat3<=mat4);

    CHECK_EQ(true,mat5<=mat6);
    CHECK_EQ(true,mat6<=mat7);
    CHECK_EQ(true,mat5<=mat7);

    CHECK_EQ(false,mat2<=mat1);
    CHECK_EQ(false,mat3<=mat1);
    CHECK_EQ(false,mat4<=mat1);
    CHECK_EQ(false,mat4<=mat2);
    CHECK_EQ(false,mat2<=mat3);
    CHECK_EQ(false,mat4<=mat3);

    CHECK_EQ(false,mat6<=mat5);
    CHECK_EQ(false,mat7<=mat6);
    CHECK_EQ(false,mat7<=mat5);

    CHECK_EQ(true,mat1<=mat1);
    CHECK_EQ(true,mat2<=mat2);
    CHECK_EQ(true,mat3<=mat3);
    CHECK_EQ(true,mat4<=mat4);
    CHECK_EQ(true,mat5<=mat5);
    CHECK_EQ(true,mat6<=mat6);
    CHECK_EQ(true,mat7<=mat7);

    CHECK_THROWS(equalto =(mat4<=mat7));
    CHECK_THROWS(equalto =(mat4<=mat5));
    CHECK_THROWS(equalto =(mat4<=mat6));
    CHECK_THROWS(equalto =(mat1<=mat7));
    CHECK_THROWS(equalto =(mat2<=mat7));
    CHECK_THROWS(equalto =(mat3<=mat7));
    CHECK_THROWS(equalto =(mat4<=mat5));

}

TEST_CASE("function > binary"){
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    CHECK_EQ(true,mat2>mat1);
    CHECK_EQ(true,mat3>mat1);
    CHECK_EQ(true,mat4>mat1);
    CHECK_EQ(true,mat4>mat2);
    CHECK_EQ(true,mat2>mat3);
    CHECK_EQ(true,mat4>mat3);

    CHECK_EQ(true,mat6>mat5);
    CHECK_EQ(true,mat7>mat6);
    CHECK_EQ(true,mat7>mat5);

    CHECK_EQ(false,mat1>mat2);
    CHECK_EQ(false,mat1>mat3);
    CHECK_EQ(false,mat1>mat4);
    CHECK_EQ(false,mat2>mat4);
    CHECK_EQ(false,mat3>mat2);
    CHECK_EQ(false,mat3>mat4);

    CHECK_EQ(false,mat5>mat6);
    CHECK_EQ(false,mat6>mat7);
    CHECK_EQ(false,mat5>mat7);

    CHECK_EQ(false,mat1>mat1);
    CHECK_EQ(false,mat2>mat2);
    CHECK_EQ(false,mat3>mat3);
    CHECK_EQ(false,mat4>mat4);
    CHECK_EQ(false,mat5>mat5);
    CHECK_EQ(false,mat6>mat6);
    CHECK_EQ(false,mat7>mat7);

    CHECK_THROWS(equalto =(mat4>mat7));
    CHECK_THROWS(equalto =(mat4>mat5));
    CHECK_THROWS(equalto =(mat4>mat6));
    CHECK_THROWS(equalto =(mat1>mat7));
    CHECK_THROWS(equalto =(mat2>mat7));
    CHECK_THROWS(equalto =(mat3>mat7));
    CHECK_THROWS(equalto =(mat4>mat5));

}

TEST_CASE("function >= binary"){
Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    CHECK_EQ(true,mat2>=mat1);
    CHECK_EQ(true,mat3>=mat1);
    CHECK_EQ(true,mat4>=mat1);
    CHECK_EQ(true,mat4>=mat2);
    CHECK_EQ(true,mat2>=mat3);
    CHECK_EQ(true,mat4>=mat3);

    CHECK_EQ(true,mat6>=mat5);
    CHECK_EQ(true,mat7>=mat6);
    CHECK_EQ(true,mat7>=mat5);

    CHECK_EQ(false,mat1>=mat2);
    CHECK_EQ(false,mat1>=mat3);
    CHECK_EQ(false,mat1>=mat4);
    CHECK_EQ(false,mat2>=mat4);
    CHECK_EQ(false,mat3>=mat2);
    CHECK_EQ(false,mat3>=mat4);

    CHECK_EQ(false,mat5>=mat6);
    CHECK_EQ(false,mat6>=mat7);
    CHECK_EQ(false,mat5>=mat7);

    CHECK_EQ(true,mat1>=mat1);
    CHECK_EQ(true,mat2>=mat2);
    CHECK_EQ(true,mat3>=mat3);
    CHECK_EQ(true,mat4>=mat4);
    CHECK_EQ(true,mat5>=mat5);
    CHECK_EQ(true,mat6>=mat6);
    CHECK_EQ(true,mat7>=mat7);

    CHECK_THROWS(equalto =(mat4>=mat7));
    CHECK_THROWS(equalto =(mat4>=mat5));
    CHECK_THROWS(equalto =(mat4>=mat6));
    CHECK_THROWS(equalto =(mat1>=mat7));
    CHECK_THROWS(equalto =(mat2>=mat7));
    CHECK_THROWS(equalto =(mat3>=mat7));
    CHECK_THROWS(equalto =(mat4>=mat5));
}

TEST_CASE("function == binary"){
    CHECK_EQ(false,mat1==mat2);
    CHECK_EQ(false,mat1==mat4);
    CHECK_EQ(false,mat3==mat2);
    CHECK_EQ(false,mat3==mat4);

    CHECK_EQ(true,mat1==mat1);
    CHECK_EQ(true,mat2==mat2);
    CHECK_EQ(true,mat3==mat3);
    CHECK_EQ(true,mat4==mat4);
    CHECK_EQ(true,mat5==mat5);
    CHECK_EQ(true,mat6==mat6);
    CHECK_EQ(true,mat7==mat7);

    CHECK_EQ(true,mat1==mat3);
    CHECK_EQ(true,mat2==mat4);
    CHECK_EQ(true,mat5==mat7);

    mat6++;
    CHECK_EQ(false,mat6==mat7);

    CHECK_THROWS(equalto =(mat4==mat7));
    CHECK_THROWS(equalto =(mat4==mat5));
    CHECK_THROWS(equalto =(mat4==mat6));
    CHECK_THROWS(equalto =(mat1==mat7));
    CHECK_THROWS(equalto =(mat2==mat7));
    CHECK_THROWS(equalto =(mat3==mat7));
    CHECK_THROWS(equalto =(mat4==mat5));
}

TEST_CASE("function != binary"){

    CHECK_EQ(true,mat1!=mat2);
    CHECK_EQ(true,mat1!=mat4);
    CHECK_EQ(true,mat3!=mat2);
    CHECK_EQ(true,mat3!=mat4);

    CHECK_EQ(false,mat1!=mat1);
    CHECK_EQ(false,mat2!=mat2);
    CHECK_EQ(false,mat3!=mat3);
    CHECK_EQ(false,mat4!=mat4);
    CHECK_EQ(false,mat5!=mat5);
    CHECK_EQ(false,mat6!=mat6);
    CHECK_EQ(false,mat7!=mat7);

    CHECK_EQ(false,mat1!=mat3);
    CHECK_EQ(false,mat2!=mat4);
    CHECK_EQ(false,mat5!=mat7);

    mat6++;
    CHECK_EQ(true,mat6!=mat7);

    CHECK_THROWS(equalto =(mat4!=mat7));
    CHECK_THROWS(equalto =(mat4!=mat5));
    CHECK_THROWS(equalto =(mat4!=mat6));
    CHECK_THROWS(equalto =(mat1!=mat7));
    CHECK_THROWS(equalto =(mat2!=mat7));
    CHECK_THROWS(equalto =(mat3!=mat7));
    CHECK_THROWS(equalto =(mat4!=mat5));
}

TEST_CASE("function ++ before"){
    Matrix mat_un{arr1,3,3};
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    ++mat_un;
    ++mat1;
    ++mat2;
    ++mat3;
    ++mat4;
    ++mat5;
    ++mat6;
    ++mat7;

    CHECK(mat_un_1 == mat_un);
    CHECK(mat1 == mat1_1);
    CHECK(mat2 == mat2_2);
    CHECK(mat3 == mat3_3);
    CHECK(mat4 == mat4_4);
    CHECK(mat5 == mat5_5);
    CHECK(mat6 == mat6_6);
    CHECK(mat7 == mat7_7);


}

TEST_CASE("function ++ after"){
    Matrix mat_un{arr1,3,3};
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    mat_un++;
    mat1++;
    mat2++;
    mat3++;
    mat4++;
    mat5++;
    mat6++;
    mat7++;

    CHECK(mat_un_1 == mat_un);
    CHECK(mat1 == mat1_1);
    CHECK(mat2 == mat2_2);
    CHECK(mat3 == mat3_3);
    CHECK(mat4 == mat4_4);
    CHECK(mat5 == mat5_5);
    CHECK(mat6 == mat6_6);
    CHECK(mat7 == mat7_7);
}

TEST_CASE("function -- before"){
    Matrix mat_un{arr1,3,3};
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    --mat_un_1;
    --mat1_1;
    --mat2_2;
    --mat3_3;
    --mat4_4;
    --mat5_5;
    --mat6_6;
    --mat7_7;

    CHECK(mat_un_1 == mat_un);
    CHECK(mat1 == mat1_1);
    CHECK(mat2 == mat2_2);
    CHECK(mat3 == mat3_3);
    CHECK(mat4 == mat4_4);
    CHECK(mat5 == mat5_5);
    CHECK(mat6 == mat6_6);
    CHECK(mat7 == mat7_7);
}

TEST_CASE("function -- after"){
    Matrix mat_un{arr1,3,3};
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};
    Matrix mat_un_1{arr1_1,3,3};
    Matrix mat1_1{unit_matrix_1,3,3};
    Matrix mat2_2{arr_b_1,3,3};
    Matrix mat3_3{arr_c_1,3,3};
    Matrix mat4_4{arr_d_1,3,3};
    Matrix mat5_5{arr_e_1,4,3};
    Matrix mat6_6{arr_f_1,4,3};
    Matrix mat7_7{arr_h_1,4,3};

    --mat_un_1;
    --mat1_1;
    --mat2_2;
    --mat3_3;
    --mat4_4;
    --mat5_5;
    --mat6_6;
    --mat7_7;

    CHECK(mat_un_1 == mat_un);
    CHECK(mat1 == mat1_1);
    CHECK(mat2 == mat2_2);
    CHECK(mat3 == mat3_3);
    CHECK(mat4 == mat4_4);
    CHECK(mat5 == mat5_5);
    CHECK(mat6 == mat6_6);
    CHECK(mat7 == mat7_7);
}

TEST_CASE("function *= matrix and than int"){
    Matrix mat_un{arr1,3,3};
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};
    mat1*=3;
    CHECK(mat1 == mat2);
    mat1-=mat3;
    mat1*=4;
    CHECK(mat4 == mat1);
    mat1-=mat2;
    mat1*=2;
    CHECK(mat3 == mat1);
    mat5*= 9;
    mat7*=4;
    CHECK(mat5 == mat7);
    mat4*=9;
    CHECK_THROWS( equalto=(mat4*5 == mat5*4));    
}

TEST_CASE("function * matrix and than int"){
    Matrix mat_un{arr1,3,3};
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    CHECK(mat1*3 == mat2);
    CHECK(mat1*4 == mat4);
    CHECK(mat1*2 == mat3);

    CHECK(mat5*9 == mat7*4);
    CHECK(mat6*9 == mat7*5);
    CHECK(mat5*5 == mat6*4);

    CHECK_THROWS( equalto=(mat4*45 == mat5)); 

    
}

TEST_CASE("function * matrix and matrix"){
    Matrix mat_un{arr1,3,3};
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    CHECK(mat2*mat1 == mat2);
    CHECK(mat4*mat1 == mat4);
    CHECK(mat3*mat1 == mat3);
    CHECK(mat3*mat2 == mat3+mat4);

    CHECK_NOTHROW(mat7*mat1);
    CHECK_NOTHROW(mat7*mat2);
    CHECK_NOTHROW(mat7*mat3);
    CHECK_NOTHROW(mat7*mat4);
    CHECK_NOTHROW(mat6*mat1);
    CHECK_NOTHROW(mat6*mat2);
    CHECK_NOTHROW(mat6*mat3);
    CHECK_NOTHROW(mat6*mat4);
    CHECK_NOTHROW(mat5*mat1);
    CHECK_NOTHROW(mat5*mat2);
    CHECK_NOTHROW(mat5*mat3);
    CHECK_NOTHROW(mat5*mat4);

    CHECK_THROWS(mat7*mat5);
    CHECK_THROWS(mat7*mat6);
    CHECK_THROWS(mat6*mat5); 
}

TEST_CASE("function *= matrix and matrix"){
    Matrix mat_un{arr1,3,3};
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};
    Matrix mat_un_1{arr1_1,3,3};
    Matrix mat1_1{unit_matrix_1,3,3};
    Matrix mat2_2{arr_b_1,3,3};
    Matrix mat3_3{arr_c_1,3,3};
    Matrix mat4_4{arr_d_1,3,3};
    Matrix mat5_5{arr_e_1,4,3};
    Matrix mat6_6{arr_f_1,4,3};
    Matrix mat7_7{arr_h_1,4,3};
    --mat_un_1;
    --mat1_1;
    --mat2_2;
    --mat3_3;
    --mat4_4;
    --mat5_5;
    --mat6_6;
    --mat7_7;
    
    mat2*=mat1;
    CHECK(mat2== mat2_2);
    mat4*=mat1;
    CHECK(mat4 == mat4_4);
    mat3*=mat1;
    CHECK(mat3 == mat3_3);
    mat2*=mat3;
    CHECK(mat2 == mat3+mat4);

    CHECK_THROWS(mat7*=mat5);
    CHECK_THROWS(mat7*=mat6);
    CHECK_THROWS(mat6*=mat5); 

    CHECK_NOTHROW(mat7*=mat1);
    CHECK_NOTHROW(mat7*=mat2);
    CHECK_NOTHROW(mat7*=mat3);
    CHECK_NOTHROW(mat7*=mat4);
    CHECK_NOTHROW(mat6*=mat1);
    CHECK_NOTHROW(mat6*=mat2);
    CHECK_NOTHROW(mat6*=mat3);
    CHECK_NOTHROW(mat6*=mat4);
    CHECK_NOTHROW(mat5*=mat1);
    CHECK_NOTHROW(mat5*=mat2);
    CHECK_NOTHROW(mat5*=mat3);
    CHECK_NOTHROW(mat5*=mat4);
}

TEST_CASE("function * int and than matrix"){
    Matrix mat_un{arr1,3,3};
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
    Matrix mat5{arr_e,4,3};
    Matrix mat6{arr_f,4,3};
    Matrix mat7{arr_h,4,3};

    CHECK(3*mat1 == mat2);
    CHECK(4*mat1 == mat4);
    CHECK(2*mat1 == mat3);

    CHECK(9*mat5 == 4*mat7);
    CHECK(9*mat6 == 5*mat7);
    CHECK(5*mat5 == 4*mat6);

    CHECK_THROWS( equalto=(45*mat4 == mat5));
}

TEST_CASE("function <<"){
    Matrix mat1{unit_matrix,3,3};
    Matrix mat2{arr_b,3,3};
    Matrix mat3{arr_c,3,3};
    Matrix mat4{arr_d,3,3};
 
    ostringstream os1;
    os1 << mat1;
    CHECK(os1.str() == "[1 0 0]\n[0 1 0]\n[0 0 1]");

    ostringstream os2;
    os2 << mat2;
    CHECK(os2.str() == "[3 0 0]\n[0 3 0]\n[0 0 3]");

    ostringstream os3;
    os3 << mat3;
    CHECK(os3.str() == "[2 0 0]\n[0 2 0]\n[0 0 2]");

    ostringstream os4;
    os4 << mat4;
    CHECK(os4.str() == "[4 0 0]\n[0 4 0]\n[0 0 4]");

    ostringstream os5;
    os5 << mat_un;
    CHECK(os5.str() == "[-1 0 0]\n[0 -1 0]\n[0 0 -1]");

}
TEST_CASE("function >>"){
    istringstream is1{"[1 1 1 1],[1 1 1 1], [1 1 1 1]\n"};
    CHECK_THROWS(is1 >> mat1);
    istringstream is2{"[1 1 1 1], [1 1 1 1] [1 1 1 1],\n"};
    CHECK_THROWS(is2 >> mat1);
    istringstream is3{"[1 11 1]  [1 1 1 1], [1 1 1 1]\n"};
    CHECK_THROWS(is3 >> mat1);
    istringstream is4{",[1 1 1 1], [1 1 1 1], [1 1 1 1]\n"};
    CHECK_THROWS(is4 >> mat1);
    istringstream is5{",,[1 1 1 1] [1 1 1 1] [1 1 1 1]\n"};
    CHECK_THROWS(is5 >> mat1);
    istringstream is6{"[ 1 1 1 1 ], [ 1 1 1 1 , [ 1 1 1 1 ]]\n"};
    CHECK_THROWS(is6 >> mat1);
    istringstream is7{"[1 1 1 1], [1 1 1 1], [1 1 1 1]\n"};
    CHECK_NOTHROW(is7 >> mat1);
}



