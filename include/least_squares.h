/// @file least_squares.h
/// Compute a least squares regression

#ifndef LEAST_SQUARES_H
#define LEAST_SQUARES_H

/// @brief x, y datapoints for least squares regression
typedef struct {
    /// The input values
    double *x;
    /// The dependent values
    double *y;
    /// The number of data points
    int n;
} Dataset;

/// @brief Read in data from a file to the Dataset
/// @param filename Path to file containing data
/// @return A populated Dataset
Dataset read_data(const char *filename);
/// @brief Find slope and intercept of the data using the least-squares method
/// @param data a pointer to the Dataset to be used
/// @param slope a parameter to hold the resulting slope
/// @param intercept a parameter to hold the resulting intercept
void solve_least_squares(const Dataset *data, double *slope, double *intercept);
/// @brief Print the obtained slope and intercept to the terminal
void print_solution(double slope, double intercept);

#endif // LEAST_SQUARES_H
