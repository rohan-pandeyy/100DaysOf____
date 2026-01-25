# Day 8: Stochastic Gradient Descent (SGD)

## Overview

This project explores **Stochastic Gradient Descent (SGD)**, an optimization algorithm often used in machine learning for large datasets. The notebook demonstrates applying **SGD Regressor** to predict housing prices using the **California Housing dataset**.

## Problem Statement

Predict the median house value in California districts based on various features like median income, house age, and average rooms, using a Stochastic Gradient Descent regression model.

## Dataset

- **Source**: `sklearn.datasets.fetch_california_housing`
- **Features**: `MedInc`, `HouseAge`, `AveRooms`, `AveBedrms`, `Population`, `AveOccup`, `Latitude`, `Longitude`.
- **Target**: `MedHouseVal` (Median House Value).
- **Size**: 20,640 samples.

## Workflow

### 1. Data Preprocessing

- **Loading**: Fetched the California Housing dataset.
- **EDA**: Visualized target distribution (histogram) and relationship between Median Income and House Value (scatter plot).
- **Splitting**: Split data into Training and Testing sets (80-20 split) using `train_test_split`.
- **Standardization**: Applied `StandardScaler` to scale features, which is crucial for SGD convergence.

### 2. Model Training

- **Algorithm**: `SGDRegressor` from `scikit-learn`.
- **Training**: Fitted the model on the scaled training data.

### 3. Evaluation

- **Metric**: Evaluated model performance using **Mean Squared Error (MSE)** on the test set.
- **Prediction**: Generated predictions on the test set.

## Key Concepts

- **Stochastic vs. Batch Gradient Descent**: SGD updates weights using one sample at a time (or small batches), making it faster for large datasets compared to using the entire dataset for each step.
- **Feature Scaling**: Essential for gradient descent-based algorithms to ensure uniform convergence speed across all weights.

## Libraries Used

- `numpy`, `pandas`
- `matplotlib` (for visualizations)
- `scikit-learn` (`SGDRegressor`, `StandardScaler`, `mean_squared_error`)
