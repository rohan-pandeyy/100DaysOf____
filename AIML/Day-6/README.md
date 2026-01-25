# Day 6: Ensemble Learning Techniques

## Overview

This project explores various **Ensemble Learning** techniques to improve classification performance on the **Raisin Dataset**. By combining multiple base models, ensemble methods often achieve better predictive accuracy and robustness than individual models.

## Problem Statement

Classify raisin varieties ('Kecimen' or 'Besni') based on their morphological features using advanced ensemble algorithms.

## Workflow

### 1. Data Preprocessing

- **Loading**: Loaded the Raisin dataset.
- **Encoding**: Converted target `Class` labels to numerical values (Kecimen: 0, Besni: 1).
- **Feature Selection**: Used **Mutual Information** to rank features and dropped the least important one (`Extent`) to optimize the model input.
- **Split**: Divided data into Training (80%) and Testing (20%) sets.

### 2. Model Training & Tuning

Implemented and tuned the following ensemble techniques using **GridSearchCV**:

- **Bagging Classifier**: An ensemble of Decision Trees trained on bootstrapped samples to reduce variance.
- **Random Forest**: A robust bagging technique that adds feature randomness.
- **AdaBoost**: A boosting algorithm that focuses on correcting the errors of previous weak learners.
- **Gradient Boosting (GBM)**: Builds trees sequentially, minimizing a loss function.
- **XGBoost (Extreme Gradient Boosting)**: An optimized implementation of gradient boosting known for speed and performance.

### 3. Advanced Ensembles

- **Voting Classifier**: Combines predictions from multiple models (Logistic Regression, KNN, Decision Tree) using soft voting.
- **Stacking Classifier**: Uses a meta-learner (Logistic Regression) to learn how to combine the predictions of base classifiers.

### 4. Evaluation

Models were evaluated and compared based on:

- **Accuracy**, **Precision**, **Recall**, and **F1-Score**.
- **Confusion Matrices** to analyze misclassifications.
- **Feature Importance** plots for tree-based models.

## Key Results

- Ensemble methods like **Random Forest** and **XGBoost** typically outperformed single decision trees.
- **Stacking** and **Voting** provided alternative strategies to leverage the strengths of different algorithm types.

## Libraries Used

- `pandas`, `numpy`
- `matplotlib`, `seaborn`
- `scikit-learn`
- `xgboost`
