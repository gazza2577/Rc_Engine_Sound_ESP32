const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 3340;
const signed char samples[] = {
0, -1, 0, 2, 6, 10, 16, 17, 18, 18, 18, 17, 16, 16, 18, 18, 
18, 19, 19, 18, 15, 9, 3, -7, -11, -15, -19, -22, -24, -25, -23, -16, 
-10, -6, -1, 2, 3, 3, 3, 3, 1, 0, -2, -5, -8, -8, -4, 0, 
5, 7, 6, 2, 0, -1, -2, -6, -10, -16, -18, -20, -19, -18, -17, -15, 
-15, -15, -17, -16, -14, -11, -8, -8, -7, -5, 2, 8, 11, 12, 12, 8, 
1, -3, -7, -11, -12, -10, -10, -9, -9, -8, -6, -5, -7, -10, -13, -16, 
-20, -23, -24, -23, -21, -20, -15, -10, -5, 0, 3, 5, 4, 3, 1, -2, 
-2, -2, -1, -1, -1, -2, -2, 0, 4, 7, 10, 13, 14, 15, 14, 15, 
14, 13, 13, 11, 8, 3, -1, -4, -7, -9, -12, -16, -19, -21, -24, -26, 
-28, -32, -35, -40, -43, -46, -49, -49, -48, -47, -45, -43, -40, -36, -32, -26, 
-23, -20, -16, -14, -12, -11, -8, -5, -3, 0, 2, 5, 8, 12, 16, 19, 
19, 17, 14, 9, 4, -3, -8, -13, -19, -25, -30, -33, -35, -38, -42, -46, 
-50, -50, -46, -39, -32, -25, -19, -15, -11, -5, 2, 10, 19, 22, 23, 23, 
25, 27, 26, 23, 20, 16, 13, 9, 9, 12, 16, 21, 23, 21, 17, 13, 
10, 5, 0, -10, -14, -15, -12, -4, 13, 25, 33, 37, 37, 34, 23, 14, 
6, -1, -4, -4, -3, -4, -6, -6, -3, 5, 9, 10, 10, 8, 6, 2, 
-2, -6, -7, -5, -1, 6, 11, 16, 22, 28, 35, 41, 47, 53, 60, 66, 
74, 77, 81, 80, 74, 64, 43, 25, 6, -17, -41, -67, -72, -70, -64, -59, 
-58, -52, -42, -25, -7, 7, 18, 19, 19, 22, 27, 35, 45, 48, 47, 45, 
42, 42, 49, 55, 61, 64, 64, 55, 45, 32, 16, -3, -25, -63, -85, -101, 
-109, -114, -117, -112, -95, -66, -30, 5, 38, 53, 67, 83, 102, 117, 127, 127, 
125, 122, 117, 113, 109, 110, 111, 108, 102, 93, 90, 88, 84, 74, 58, 35, 
25, 20, 17, 11, 2, -13, -18, -19, -16, -11, 0, 9, 16, 21, 25, 30, 
43, 50, 49, 42, 31, 22, 16, 14, 13, 14, 15, 15, 10, 3, -2, 0, 
8, 26, 33, 34, 30, 26, 22, 14, 9, 6, 4, 5, 10, 14, 20, 26, 
31, 34, 36, 37, 38, 36, 32, 25, 12, 5, 0, -4, -7, -5, -2, 4, 
10, 13, 11, 5, 1, -4, -9, -16, -26, -40, -46, -49, -49, -49, -51, -51, 
-49, -45, -39, -30, -20, -16, -14, -14, -15, -17, -18, -20, -21, -23, -24, -24, 
-24, -22, -19, -13, -6, 1, 1, -1, -3, -6, -13, -21, -30, -36, -37, -36, 
-29, -24, -19, -14, -10, -6, -4, -5, -9, -15, -22, -31, -35, -36, -33, -30, 
-27, -22, -18, -13, -9, -7, -6, -10, -13, -17, -19, -22, -25, -27, -29, -31, 
-34, -35, -32, -29, -24, -20, -17, -14, -13, -13, -11, -8, -4, -1, 0, 1, 
1, 1, 2, 3, 3, 3, 3, 3, 3, 1, -1, -5, -10, -14, -19, -22, 
-23, -24, -23, -22, -19, -16, -12, -6, -1, 4, 6, 5, 3, 0, -2, -2, 
-2, -2, -3, -6, -7, -7, -6, -5, -3, -1, 0, 2, 4, 5, 6, 6, 
5, 2, -1, -5, -10, -13, -17, -17, -16, -14, -12, -9, -5, -2, 1, 2, 
1, -3, -6, -9, -11, -12, -13, -12, -11, -8, -4, 0, 4, 6, 6, 4, 
3, 1, -3, -5, -8, -10, -11, -10, -6, -3, 1, 4, 4, 3, 2, 1, 
0, 1, 2, 3, 2, 2, 1, 1, 1, 0, 0, -1, -2, -3, -3, -4, 
-6, -8, -10, -13, -15, -17, -17, -18, -19, -20, -19, -18, -16, -15, -14, -11, 
-8, -5, -2, 1, 1, 0, -1, -3, -4, -4, -4, -3, -1, 0, 0, 1, 
1, 1, 1, 1, 0, -2, -6, -9, -12, -13, -15, -16, -18, -18, -17, -15, 
-13, -8, -5, 0, 5, 9, 12, 15, 17, 17, 15, 13, 11, 7, 6, 4, 
2, -1, -4, -5, -6, -7, -8, -11, -15, -18, -21, -22, -22, -24, -24, -26, 
-27, -28, -29, -28, -27, -25, -23, -21, -18, -16, -15, -14, -13, -11, -9, -6, 
-4, -4, -5, -6, -8, -8, -8, -8, -7, -5, -2, 0, 2, 3, 4, 5, 
5, 5, 5, 5, 3, -1, -5, -9, -12, -16, -18, -21, -21, -22, -22, -23, 
-27, -29, -32, -33, -34, -36, -36, -35, -34, -31, -28, -25, -22, -21, -20, -19, 
-18, -14, -11, -5, 0, 5, 11, 16, 21, 26, 31, 36, 40, 42, 42, 40, 
36, 31, 23, 17, 13, 11, 9, 10, 15, 22, 29, 34, 37, 38, 36, 33, 
28, 23, 18, 9, 5, 2, -1, -4, -6, -9, -9, -7, -6, -5, -8, -17, 
-25, -32, -36, -39, -41, -41, -39, -34, -26, -14, 6, 16, 27, 35, 41, 46, 
48, 46, 43, 39, 34, 27, 23, 20, 16, 13, 13, 16, 19, 21, 20, 17, 
14, 9, 6, 4, 2, 4, 9, 14, 18, 20, 23, 26, 32, 35, 36, 33, 
30, 26, 22, 19, 16, 12, 7, 2, -1, -4, -7, -11, -14, -19, -21, -24, 
-24, -21, -11, -5, 1, 5, 6, 7, 9, 13, 15, 16, 15, 14, 17, 22, 
26, 28, 28, 25, 23, 20, 17, 13, 9, 0, -5, -9, -11, -12, -13, -16, 
-21, -25, -24, -19, -8, -2, 4, 9, 12, 14, 16, 16, 18, 20, 22, 21, 
11, 3, -2, -3, 0, 8, 12, 14, 15, 16, 17, 19, 19, 20, 19, 15, 
11, 2, -2, -3, -2, 2, 11, 20, 29, 36, 40, 41, 40, 38, 36, 36, 
38, 41, 44, 41, 37, 30, 25, 22, 23, 25, 26, 26, 26, 23, 21, 21, 
24, 27, 32, 34, 33, 32, 29, 27, 25, 23, 20, 17, 13, 10, 7, 6, 
5, 1, -3, -8, -18, -23, -26, -27, -25, -20, -16, -12, -10, -9, -8, -7, 
-7, -7, -9, -11, -13, -17, -17, -15, -11, -6, 0, 2, 0, -3, -6, -9, 
-10, -11, -11, -10, -8, -5, -4, -3, -3, -3, -3, -3, -3, -4, -5, -7, 
-9, -14, -17, -21, -25, -27, -30, -31, -31, -32, -34, -37, -40, -42, -42, -40, 
-38, -36, -32, -29, -25, -21, -18, -15, -15, -17, -18, -21, -23, -26, -27, -28, 
-29, -30, -30, -30, -29, -26, -22, -16, -11, -9, -7, -7, -8, -9, -13, -17, 
-22, -25, -28, -30, -31, -30, -27, -23, -17, -10, -6, -6, -8, -12, -17, -21, 
-22, -20, -18, -14, -9, -1, 5, 9, 13, 17, 19, 19, 18, 15, 13, 12, 
11, 9, 6, 4, 2, 1, 0, -1, -4, -9, -14, -22, -26, -28, -28, -25, 
-21, -11, -4, 1, 5, 8, 11, 15, 16, 17, 16, 14, 8, 4, -1, -5, 
-8, -9, -8, -7, -6, -4, -2, 0, 0, 0, -2, -3, -4, -6, -6, -5, 
-4, -3, -1, 2, 4, 7, 9, 13, 15, 15, 15, 14, 12, 9, 4, 2, 
1, 2, 4, 5, 6, 5, 5, 5, 5, 2, 0, -3, -6, -8, -10, -14, 
-15, -16, -15, -13, -11, -7, -5, -5, -6, -8, -13, -15, -19, -23, -27, -31, 
-36, -37, -38, -35, -32, -29, -20, -16, -12, -9, -7, -5, -5, -5, -6, -6, 
-6, -3, -1, 1, 2, 5, 8, 12, 14, 14, 12, 10, 3, 0, -3, -4, 
-5, -7, -8, -10, -12, -14, -16, -18, -21, -23, -26, -30, -33, -35, -35, -32, 
-28, -25, -22, -18, -16, -14, -11, -8, -6, -1, 1, 2, 3, 3, 2, 2, 
4, 6, 8, 9, 10, 10, 10, 12, 13, 13, 12, 9, 5, 1, -3, -10, 
-16, -20, -24, -27, -29, -30, -29, -28, -27, -27, -28, -28, -28, -27, -24, -21, 
-15, -13, -12, -12, -12, -10, -7, -3, -1, 0, 2, 6, 9, 11, 11, 12, 
14, 17, 19, 18, 17, 15, 12, 8, 8, 10, 13, 18, 19, 18, 16, 15, 
18, 21, 22, 19, 13, 6, 0, -5, -10, -12, -13, -14, -13, -10, -8, -5, 
-4, -4, -5, -9, -10, -11, -12, -11, -9, -7, -6, -4, -3, 0, 4, 7, 
10, 12, 15, 18, 18, 16, 12, 10, 9, 11, 18, 21, 24, 26, 25, 20, 
16, 14, 16, 18, 19, 13, 10, 8, 9, 10, 9, 9, 12, 14, 13, 6, 
-14, -29, -40, -47, -49, -47, -42, -38, -34, -29, -18, -1, 25, 35, 37, 38, 
44, 59, 67, 70, 68, 68, 73, 85, 90, 92, 94, 94, 92, 76, 59, 42, 
27, 16, -1, -14, -28, -38, -41, -41, -40, -38, -36, -33, -30, -25, -13, -1, 
13, 25, 35, 46, 55, 67, 78, 87, 89, 83, 77, 69, 61, 52, 43, 39, 
35, 28, 19, 10, 5, 6, 7, 3, -4, -11, -16, -15, -14, -14, -13, -7, 
-2, 1, 4, 10, 18, 31, 36, 36, 31, 25, 22, 16, 12, 9, 7, 6, 
8, 11, 14, 17, 20, 23, 27, 26, 24, 19, 14, 9, 0, -5, -6, -6, 
-4, -2, -2, -3, -3, -3, -1, 1, -1, -4, -9, -14, -17, -18, -19, -19, 
-19, -20, -19, -16, -13, -10, -9, -8, -8, -10, -11, -13, -14, -13, -11, -10, 
-10, -11, -12, -16, -21, -26, -30, -33, -33, -27, -24, -22, -21, -21, -23, -28, 
-31, -33, -34, -34, -34, -32, -26, -18, -9, 1, 8, 10, 11, 11, 11, 9, 
3, -2, -9, -14, -18, -22, -23, -23, -23, -23, -24, -26, -27, -27, -26, -25, 
-24, -25, -27, -30, -34, -37, -40, -41, -41, -40, -39, -37, -30, -24, -17, -10, 
-5, -2, -3, -6, -9, -13, -15, -19, -19, -18, -16, -13, -8, 1, 6, 10, 
13, 16, 18, 19, 18, 16, 13, 8, 1, -2, -4, -4, -2, 0, 1, 1, 
1, 1, 1, 0, -3, -6, -10, -15, -17, -19, -19, -18, -18, -17, -14, -9, 
-4, 0, 3, 5, 5, 4, 3, 2, 1, -1, -3, -5, -8, -11, -13, -14, 
-13, -12, -10, -9, -7, -3, 1, 6, 9, 11, 11, 11, 8, 5, 1, -3, 
-6, -7, -7, -6, -4, -3, -3, -2, -3, -6, -10, -17, -25, -30, -32, -33, 
-34, -32, -29, -27, -23, -18, -14, -5, 0, 3, 7, 8, 6, 3, 2, 2, 
2, 3, 3, 3, 2, 3, 4, 5, 5, 6, 6, 6, 7, 7, 4, 2, 
0, -1, -1, -1, 1, 2, 3, 3, 3, 3, 3, 2, -1, -2, -3, -3, 
-2, -1, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 1, 0, 0, 0, 
1, 1, 2, 2, 0, -5, -9, -13, -16, -18, -19, -21, -22, -22, -21, -20, 
-17, -15, -12, -9, -5, -3, -1, 0, 1, 2, 5, 8, 10, 12, 14, 17, 
19, 20, 20, 19, 17, 14, 9, 0, -4, -8, -11, -15, -20, -28, -32, -34, 
-36, -38, -39, -39, -38, -36, -34, -31, -27, -23, -19, -16, -12, -8, -2, 1, 
4, 8, 12, 16, 18, 18, 16, 15, 14, 11, 8, 4, 1, -2, -3, -5, 
-8, -10, -11, -10, -8, -5, -4, -3, -3, -4, -4, -4, -5, -7, -10, -14, 
-20, -22, -23, -23, -23, -25, -25, -24, -22, -20, -19, -16, -13, -9, -4, 3, 
9, 15, 19, 23, 27, 30, 33, 35, 36, 37, 38, 37, 34, 32, 31, 29, 
30, 31, 33, 37, 41, 43, 44, 40, 35, 28, 21, 16, 9, -2, -10, -19, 
-26, -31, -34, -39, -43, -47, -50, -51, -51, -52, -54, -54, -52, -45, -31, -21, 
-11, 1, 14, 24, 37, 43, 48, 54, 57, 58, 56, 54, 52, 49, 45, 37, 
31, 25, 18, 8, -2, -11, -10, -6, -4, -3, -6, -8, -8, -7, -9, -14, 
-23, -25, -23, -18, -9, 2, 20, 32, 44, 53, 57, 53, 44, 32, 19, 7, 
-4, -23, -38, -50, -57, -58, -55, -49, -47, -45, -40, -34, -23, -16, -8, 3, 
18, 31, 46, 52, 57, 63, 67, 65, 52, 42, 35, 32, 31, 26, 20, 16, 
14, 13, 12, 6, 1, -4, -8, -13, -17, -23, -22, -19, -12, -4, 4, 6, 
6, 8, 12, 20, 32, 36, 37, 35, 33, 33, 40, 47, 55, 63, 67, 70, 
67, 62, 55, 48, 42, 34, 28, 21, 16, 13, 12, 10, 8, 6, 4, 5, 
6, 6, 4, -1, -5, -6, 1, 8, 14, 16, 17, 15, 13, 12, 12, 15, 
19, 24, 25, 23, 21, 21, 21, 23, 23, 24, 26, 29, 33, 37, 43, 47, 
50, 50, 39, 27, 17, 10, 4, -2, -13, -21, -28, -35, -41, -47, -49, -48, 
-46, -42, -38, -36, -36, -35, -32, -29, -26, -23, -21, -18, -14, -10, -9, -12, 
-17, -20, -22, -20, -16, -13, -11, -11, -9, -7, -2, 1, 2, 2, 1, 0, 
-2, -5, -8, -12, -16, -18, -17, -14, -11, -9, -8, -13, -19, -25, -30, -34, 
-37, -39, -41, -44, -48, -50, -52, -50, -46, -41, -37, -35, -30, -26, -20, -12, 
-4, 5, 9, 10, 7, 3, -5, -15, -21, -25, -26, -28, -30, -30, -28, -25, 
-22, -21, -20, -20, -21, -22, -23, -25, -26, -25, -23, -21, -20, -14, -7, 0, 
6, 9, 9, 8, 6, 3, 2, 2, 2, 3, 5, 6, 7, 8, 11, 12, 
13, 13, 11, 8, 3, -1, -3, -3, -2, 1, 3, 3, 2, 1, 0, -2, 
-4, -7, -10, -12, -16, -20, -20, -19, -17, -13, -10, -5, -2, 1, 5, 8, 
10, 11, 9, 7, 5, 3, 2, 2, 2, 2, 1, -1, -4, -5, -6, -8, 
-9, -10, -10, -11, -12, -13, -15, -17, -16, -14, -10, -5, -1, 5, 7, 9, 
11, 13, 16, 16, 13, 10, 8, 6, 1, -2, -5, -9, -11, -12, -12, -10, 
-9, -7, -5, -6, -7, -7, -7, -7, -8, -10, -13, -15, -16, -15, -13, -6, 
-4, -2, -2, -3, -2, -1, 1, 3, 5, 6, 8, 9, 9, 8, 6, 4, 
0, -3, -7, -11, -16, -21, -23, -23, -22, -21, -20, -18, -17, -16, -16, -19, 
-22, -24, -25, -25, -26, -27, -27, -24, -21, -16, -12, -8, -3, -1, 3, 5, 
5, 4, 1, -1, -3, -4, -5, -5, -5, -6, -6, -7, -7, -8, -9, -11, 
-13, -14, -17, -19, -21, -24, -24, -21, -16, -13, -10, -8, -6, -6, -5, -5, 
-5, -5, -6, -7, -8, -9, -9, -9, -10, -11, -13, -15, -16, -17, -19, -22, 
-23, -24, -24, -24, -26, -25, -23, -21, -18, -15, -16, -17, -19, -20, -19, -18, 
-16, -14, -11, -8, -4, 3, 9, 14, 18, 22, 24, 24, 25, 28, 32, 36, 
36, 32, 30, 28, 29, 30, 29, 25, 20, 15, 11, 10, 8, 8, 8, 7, 
8, 11, 16, 20, 24, 28, 32, 41, 47, 52, 53, 50, 42, 24, 8, -6, 
-15, -22, -28, -32, -34, -33, -29, -23, -18, -18, -19, -20, -19, -16, -16, -17, 
-15, -11, -3, 11, 17, 19, 16, 14, 13, 12, 13, 12, 10, 8, 7, 9, 
14, 19, 22, 23, 20, 19, 19, 22, 26, 30, 37, 41, 44, 43, 41, 39, 
35, 34, 31, 27, 23, 20, 19, 19, 19, 19, 21, 23, 21, 18, 14, 11, 
11, 15, 18, 20, 19, 15, 9, 6, 5, 6, 10, 13, 17, 18, 19, 22, 
25, 24, 16, 6, -4, -12, -17, -23, -28, -32, -34, -33, -30, -24, -21, -18, 
-12, -5, 3, 12, 15, 15, 12, 6, 1, -1, 0, 0, -2, -1, 7, 16, 
23, 27, 27, 23, 17, 13, 9, 6, 2, -3, -3, -2, 4, 11, 17, 23, 
25, 26, 31, 38, 44, 50, 49, 48, 48, 48, 50, 50, 48, 46, 42, 41, 
40, 39, 38, 37, 38, 39, 38, 35, 33, 32, 31, 28, 24, 19, 14, 10, 
9, 9, 9, 6, 3, 1, 2, 5, 8, 11, 12, 13, 14, 13, 13, 12, 
13, 12, 11, 12, 14, 16, 17, 16, 13, 7, 1, -4, -10, -19, -23, -24, 
-23, -21, -16, -10, -8, -9, -11, -14, -16, -18, -19, -18, -18, -17, -17, -15, 
-12, -10, -7, -5, -1, 2, 3, 3, 1, -2, -3, -2, 2, 5, 7, 3, 
-1, -7, -13, -20, -27, -33, -36, -37, -36, -36, -37, -38, -38, -38, -38, -39, 
-38, -38, -35, -32, -29, -27, -26, -26, -26, -25, -22, -18, -14, -11, -9, -8, 
-9, -11, -13, -14, -15, -14, -12, -10, -12, -15, -19, -24, -28, -29, -29, -29, 
-30, -30, -30, -28, -24, -19, -14, -10, -8, -9, -12, -16, -21, -30, -35, -37, 
-34, -30, -27, -22, -18, -13, -7, -2, 0, -2, -6, -9, -10, -9, -5, -2, 
0, 2, 3, 3, 4, 6, 9, 10, 11, 10, 8, 5, 1, -3, -6, -6, 
-6, -5, -5, -6, -7, -9, -10, -11, -12, -13, -11, -10, -9, -6, -3, -3, 
-2, -2, -2, -2, -3, -4, -7, -9, -12, -14, -15, -16, -15, -15, -14, -13, 
-12, -10, -10, -10, -9, -7, -5, -3, -3, -3, -3, -3, -1, 0, 0, 1, 
1, 1, 3, 2, 0, -3, -7, -10, -11, -12, -10, -8, -8, -8, -8, -7, 
-6, -6, -4, -5, -6, -7, -8, -8, -8, -7, -5, -2, 2, 5, 5, 3, 
1, -1, -3, -4, -5, -7, -10, -13, -15, -16, -14, -12, -10, -8, -9, -10, 
-10, -10, -9, -7, -5, 0, 3, 5, 7, 10, 12, 13, 14, 13, 11, 9, 
4, 0, -5, -10, -14, -17, -20, -22, -23, -24, -25, -25, -26, -25, -23, -20, 
-17, -15, -15, -16, -17, -18, -18, -20, -21, -22, -24, -24, -22, -19, -15, -13, 
-12, -11, -10, -10, -12, -15, -18, -20, -22, -22, -22, -21, -19, -14, -10, -7, 
-5, -5, -4, -2, -1, -1, 0, 1, 1, -1, -3, -5, -5, -5, -5, -6, 
-9, -11, -12, -13, -13, -15, -17, -18, -17, -12, -3, 2, 7, 8, 8, 6, 
4, 3, 0, -4, -7, -8, -7, -4, 0, 5, 11, 19, 26, 33, 38, 41, 
40, 36, 31, 26, 22, 17, 10, 6, 3, 1, 2, 5, 9, 10, 10, 7, 
2, -5, -9, -11, -12, -11, -10, -6, -1, 7, 18, 30, 40, 52, 58, 65, 
72, 77, 74, 65, 52, 40, 28, 17, 3, -6, -12, -17, -22, -25, -28, -28, 
-28, -28, -29, -31, -33, -34, -35, -37, -37, -33, -29, -25, -20, -11, 3, 29, 
43, 49, 50, 47, 46, 49, 51, 50, 46, 43, 42, 42, 42, 41, 40, 41, 
38, 32, 26, 19, 13, 1, -9, -17, -17, -9, 3, 17, 22, 27, 32, 39, 
49, 53, 57, 60, 61, 60, 59, 63, 70, 79, 86, 89, 89, 86, 81, 73, 
63, 47, 34, 19, 2, -14, -25, -26, -21, -15, -10, -4, 4, 19, 29, 34, 
34, 33, 31, 31, 32, 34, 37, 42, 47, 48, 48, 50, 55, 63, 75, 77, 
76, 71, 60, 40, 24, 11, 3, -1, -3, -8, -12, -16, -19, -21, -21, -18, 
-13, -6, 1, 4, 3, 0, -3, -5, -9, -10, -6, 1, 10, 19, 24, 25, 
23, 22, 22, 20, 15, 3, -3, -6, -7, -9, -10, -7, -3, 1, 3, 2, 
-3, -9, -14, -18, -23, -28, -34, -37, -38, -37, -34, -29, -23, -20, -18, -16, 
-12, -8, -2, -3, -5, -8, -11, -11, -12, -14, -17, -22, -26, -31, -35, -39, 
-43, -45, -42, -39, -37, -36, -35, -34, -31, -31, -32, -34, -35, -35, -31, -28, 
-27, -24, -21, -18, -14, -12, -10, -9, -10, -14, -19, -24, -29, -32, -35, -36, 
-37, -38, -37, -36, -34, -32, -31, -30, -28, -26, -26, -27, -28, -29, -30, -32, 
-33, -34, -34, -34, -33, -30, -28, -26, -22, -19, -16, -16, -18, -21, -25, -27, 
-27, -25, -22, -18, -13, -8, 0, 5, 9, 13, 15, 16, 14, 9, 3, -2, 
-6, -12, -19, -22, -26, -26, -25, -23, -19, -16, -13, -10, -8, -7, -9, -12, 
-15, -19, -22, -22, -20, -17, -15, -13, -10, -7, -3, 0, };
