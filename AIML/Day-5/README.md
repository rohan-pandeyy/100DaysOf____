# Day 5: Classification using Random Forest and Decision Tree

## Overview

This project focuses on a **classification problem** using the **Wine Quality (Red)** dataset. The objective is to categorize wine quality into distinct classes ('poor', 'average', 'best') and compare the performance of **Random Forest** and **Decision Tree** classifiers.

## Problem Statement

Predict the quality category of red wine based on its physicochemical properties (e.g., acidity, sugar, sulfur dioxide, alcohol).

## Workflow

### 1. Data Loading and Preprocessing

- **Dataset**: Fetched the `winequality-red.csv` from the UCI Machine Learning Repository.
- **Target Transformation**: The original numeric `quality` score (0-10) was grouped into categories:
    - **poor**: score <= 4
    - **average**: score 5 - 6
    - **best**: score >= 7
- **Split**: Stratified train-test split (75% Train, 25% Test).
- **Scaling**: Applied **StandardScaler** to normalize feature values.

### 2. Model Training

Two classifiers were trained on the processed data:

- **Random Forest Classifier**: An ensemble method using multiple decision trees.
- **Decision Tree Classifier**: A single tree-based model.

### 3. Evaluation

Models were evaluated using:

- **Accuracy**: Overall correctness of predictions.
- **Confusion Matrix**: To visualize true positives, false positives, etc.
- **Classification Report**: Precision, Recall, and F1-score for each class.
- **Comparison**: A side-by-side comparison dataframe was created to assess performance.

## Results

- **Random Forest** generally outperformed the single **Decision Tree** in terms of accuracy on this dataset (~88% vs ~79%).
- The "poor" quality class had very few samples, leading to challenges in prediction (low recall/precision for that specific class).

## Libraries Used

- `pandas`
- `numpy`
- `matplotlib`, `seaborn`
- `scikit-learn`
