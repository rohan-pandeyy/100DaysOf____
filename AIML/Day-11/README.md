# Day 11: MLP Depth Comparison on MNIST

## Overview

This project investigates the effect of **neural network depth** (number of hidden layers) on training dynamics and accuracy. It trains multiple **Multi-Layer Perceptron (MLP)** classifiers on the **MNIST dataset** with varying numbers of layers to observe the "vanishing gradient" problem or simply the difficulty of training deeper networks without advanced techniques.

## Dataset

- **Name**: MNIST (Modified National Institute of Standards and Technology).
- **Content**: Handwritten digits (0-9).
- **Size**: 70,000 images (60k train, 10k test).
- **Features**: 28x28 pixel grayscale images, flattened to 784 features.

## Experiment Setup

- **Model**: `MLPClassifier` from `scikit-learn`.
- **hidden_layer_sizes**:
    - **1-layer**: `(10,)`
    - **5-layer**: `(10, 10, 10, 10, 10)`
    - **10-layer**: `(10, ...)` (10 layers of 10 units)
    - **20-layer**: `(10, ...)` (20 layers of 10 units)
- **Parameters**:
    - Activation: `ReLU`
    - Solver: `Adam`
    - Max Iterations: 30
    - Learning Rate Init: 0.001

## Workflow

1.  **Data Loading**: Fetching MNIST data using `fetch_openml`.
2.  **Preprocessing**: Normalizing pixel values (0-255 -> 0-1) and applying `StandardScaler`.
3.  **Training Loop**: Iterating through the different depth configurations and training the MLP.
4.  **Evaluation**: Calculating Train and Test accuracy.
5.  **Visualization**:
    - **Loss Curves**: Plotting training loss over iterations to visualize convergence speed.
    - **Accuracy Bar Chart**: Comparing train vs. test accuracy across different depths.

## Key Observations

- As the network gets deeper (e.g., 20 layers), training becomes significantly **slower**.
- **Accuracy degrades** with excessive depth in this simple configuration (vanishing/exploding gradients or optimization difficulties).
- Shallower networks (1 or 5 layers) tend to converge faster and achieve higher accuracy for this specific setup without advanced initialization or residual connections.

## Libraries Used

- `numpy`
- `matplotlib`
- `scikit-learn` (`MLPClassifier`, `StandardScaler`, `train_test_split`)
