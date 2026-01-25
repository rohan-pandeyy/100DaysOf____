# Day 3: Linear vs. Polynomial Regression

## Overview

This project compares **Linear Regression** and **Polynomial Regression** models to predict student scores based on the number of hours studied. It demonstrates how increasing the complexity of a model (using polynomial features) can impact performance.

## Problem Statement

Given a dataset of student study hours and their corresponding scores, build models to predict scores and determine which regression technique provides a better fit for the data.

## Workflow

### 1. Data Loading and Preparation

- **Dataset**: Loaded `student_scores - student_scores.csv` from a remote URL.
- **Structure**: Simple dataset with `Hours` (Feature) and `Scores` (Target).
- **Split**: Data divided into Training (80%) and Testing (20%) sets.

### 2. Model Training

- **Linear Regression**: Fitted a standard linear model.
- **Polynomial Regression**: Transformed features to 2nd degree polynomial and fitted a linear model on the transformed data.

### 3. Evaluation

The models were compared using the following metrics:

- **R² Score**: To measure how well the independent variable explains the variance in the target.
- **Mean Absolute Error (MAE)**: To measure the average absolute difference between predicted and actual scores.

### 4. Visualization

- Plotted the original data points against the regression lines for both Linear and Polynomial models to visually inspect the fit.

## Results

A performance matrix was generated to compare both models side-by-side.
_(Note: Polynomial Regression usually captures non-linear trends better, but for simple linear data, the improvement might be marginal or lead to overfitting.)_

## Libraries Used

- `pandas`
- `numpy`
- `matplotlib`
- `scikit-learn`
