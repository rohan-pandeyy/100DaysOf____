# Day 2: Linear Regression on California Housing Data

## Overview

This project explores how to train, evaluate, and interpret a **Linear Regression** model using the California Housing dataset. The goal is to predict median house values based on various numerical features.

## Problem Statement

Given a dataset containing information about housing prices in California, build a model to predict the **Median House Value** using features like median income, house age, and average number of rooms.

## Workflow

### 1. Data Loading and Preparation

- **Dataset**: California Housing dataset from `sklearn.datasets`.
- **Structure**: Converted into a Pandas DataFrame for easier manipulation.
- **Features**: `MedInc`, `HouseAge`, `AveRooms`, `AveBedrms`, `Population`, `AveOccup`, `Latitude`, `Longitude`.
- **Target**: `MedHouseVal` (Median House Value).

### 2. Exploratory Data Analysis (EDA)

- **Distribution**: Visualized the target variable (`MedHouseVal`) using histograms.
- **Correlation**: Generated a heatmap to understand relationships between features.

### 3. Model Training

- **Split**: Data divided into Training (80%) and Testing (20%) sets.
- **Algorithm**: Linear Regression from `sklearn.linear_model`.

### 4. Evaluation

The model performance is evaluated using:

- **Mean Squared Error (MSE)**: Measures the average squared difference between estimated values and the actual value.
- **R² Score**: Represents the proportion of the variance for the dependent variable that's explained by the independent variables.

### 5. Visualization

- Scatter plots comparing **Actual vs. Predicted** house values to assess model accuracy visually.

## Libraries Used

- `pandas`
- `numpy`
- `matplotlib`
- `seaborn`
- `scikit-learn`
