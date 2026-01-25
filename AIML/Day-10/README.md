# Day 10: PCA Analysis on MNIST Dataset

## Overview

This project applies **Principal Component Analysis (PCA)** to the **MNIST dataset** (handwritten digits) to reduce its dimensionality and visualize the data in a 2D space.

## Dataset

- **Name**: MNIST (Modified National Institute of Standards and Technology) database.
- **Content**: 60,000 training images and 10,000 testing images of handwritten digits (0-9).
- **Image Size**: 28x28 pixels (grayscale).

## Workflow

### 1. Data Preprocessing

- **Loading**: Loaded the dataset using `tensorflow.keras.datasets.mnist`.
- **Flattening**: Reshaped the 28x28 images into 1D vectors of size 784 (28\*28).
- **Scaling**: Standardized the features using `StandardScaler` to have mean=0 and variance=1, which is crucial for PCA.

### 2. Dimensionality Reduction (PCA)

- **Algorithm**: Applied `PCA` from `scikit-learn`.
- **Components**: Reduced the dimensions from 784 to **2 principal components**.
- **Variance Analysis**: Calculated the explained variance ratio to understand how much information (variance) is retained by the 2 components.

### 3. Visualization

- **Scatter Plot**: Plotted the 2D projection of the dataset.
- **Color Coding**: Points are colored based on their true digit labels (0-9) to observe clusters and separability.

## Key Observations

- PCA helps identify patterns and clusters in high-dimensional data by projecting it into a lower-dimensional space.
- Visualizing the 2D projection allows us to see how distinct the differents digits are from one another in the feature space.

## Libraries Used

- `numpy`
- `matplotlib`
- `scikit-learn` (`PCA`, `StandardScaler`)
- `tensorflow.keras.datasets` (for MNIST loading)
