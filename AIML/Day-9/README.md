# Day 9: Data Preprocessing

## Overview

This project demonstrates essential Data Preprocessing techniques using the famous **Titanic Dataset**. The goal is to clean and prepare the raw data for machine learning models.

## Dataset

- **Source**: Data Science Dojo (Titanic dataset).
- **Size**: 891 samples.
- **Target**: `Survived` (Classification task context, though only preprocessing is shown).

## Workflow

### 1. Data Cleaning

- **Null Value Handling**:
    - Calculated percentage of missing values.
    - **Imputation**: Filled missing values in `Age` and `Embarked` columns with the **most frequent** value using `SimpleImputer`.
    - **Dropping**: Dropped the `Cabin` column due to a high volume of missing data.
- **Duplicate Removal**: Removed duplicate rows to ensure data integrity.

### 2. Categorical Encoding

- **One-Hot Encoding**: Converted categorical variables `Sex` and `Embarked` into numerical format using `pd.get_dummies` with `drop_first=True` to avoid multicollinearity (dummy variable trap).

### 3. Feature Scaling

- **Standardization**: Applied `StandardScaler` to numerical features `Age` and `Fare` to scale them to a mean of 0 and standard deviation of 1.

### 4. Data Exploration

- **Sorting**: Sorted the dataset by `Fare` to inspect outliers or distribution.

## Libraries Used

- `pandas` (Data manipulation)
- `scikit-learn` (`SimpleImputer`, `StandardScaler`)
