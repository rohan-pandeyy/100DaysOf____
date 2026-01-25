# Day 4: Feature Selection using Chi-Square Test

## Overview

This project demonstrates how to perform feature selection using the **Chi-Square (χ²)** statistical test on the **Raisin Dataset**. Feature selection is a critical step in machine learning to identify the most relevant features that contribute to the prediction of the target variable.

## Problem Statement

Given the Raisin Dataset, which contains features extracted from images of two raisin varieties (Kecimen and Besni), the goal is to identify the most statistically significant features for classifying the raisin type using the Chi-Square test.

## Workflow

### 1. Data Loading and Preprocessing

- **Dataset**: Loaded `Raisin_Dataset.xlsx` manually via Google Colab upload.
- **Target Encoding**: The categorical target `Class` ('Kecimen', 'Besni') was encoded into numerical values (0 and 1).
- **Structure**: Features include `Area`, `MajorAxisLength`, `MinorAxisLength`, `Eccentricity`, `ConvexArea`, `Extent`, `Perimeter`.

### 2. Feature Selection using Chi-Square

- **Scaling**: Since Chi-Square requires non-negative values, the features were normalized using **MinMaxScaler** to the range [0, 1].
- **Chi-Square Test**: `chi2` from `sklearn.feature_selection` was computed for each feature against the target.
- **Ranking**: Features were ranked based on their Chi-Square scores and p-values. Higher Chi-Square scores indicate higher importance.

### 3. Feature Elimination

- Demonstrated how to drop the least important feature based on the statistical results to optimize the dataset for subsequent modeling.

## Key Concepts

- **Chi-Square Test**: Measures the dependence between stochastic variables. In feature selection, it tests the independence between a feature and the class label. A low p-value indicates that the feature and target are dependent (statistically significant).

## Libraries Used

- `pandas`
- `numpy`
- `matplotlib`, `seaborn` (imported but primarily utilized for potential visualization)
- `scikit-learn` (`feature_selection.chi2`, `preprocessing.MinMaxScaler`, `preprocessing.LabelEncoder`)
