# Day 7: Image Classification with Transfer Learning

## Overview

This project demonstrates **Image Classification** using Deep Learning techniques, specifically leveraging **Transfer Learning** with the **ResNet152V2** architecture. The goal is to classify images into one of 10 different animal categories.

## Problem Statement

Build a model to accurately classify images from a dataset containing 10 distinct classes of animals.

## Dataset

- **Structure**: The dataset is organized into subdirectories representing each class.
- **Classes**: 10 classes (`horse`, `mouse`, `oyster`, `penguin`, `pig`, `rat`, `rhinoceros`, `swan`, `tiger`, `turkey`).
- **Size**: Total of 600 images, with a balanced distribution of 60 images per class.

## Workflow

### 1. Data Preparation

- **Loading**: Used `tf.keras.utils.image_dataset_from_directory` to load images.
- **Exploratory Data Analysis (EDA)**: Analyzed class distribution to ensure data balance. Implemented visualizations using **Plotly** and **Matplotlib**.
- **Data Augmentation**: (Implied usage of `ImageDataGenerator`) To increase dataset diversity and robustness.

### 2. Model Architecture

- **Base Model**: **ResNet152V2**, a powerful Convolutional Neural Network (CNN) pre-trained on ImageNet.
- **Transfer Learning**: The pre-trained backbone is used to extract features, likely followed by custom fully connected layers (`Dense`, `GlobalAvgPool2D`, `Dropout`) adapted for the 10-class classification task.

### 3. Training & Callbacks

- **Framework**: TensorFlow/Keras.
- **Callbacks**:
    - `ModelCheckpoint`: To save the best model during training.
    - `EarlyStopping`: To prevent overfitting by stopping training when validation performance stagnates.

## Technologies Used

- **TensorFlow/Keras**: Core deep learning framework.
- **ResNet152V2**: Pre-trained model architecture.
- **Plotly & Seaborn**: For interactive and statistical data visualization.
- **NumPy & Pandas**: For data manipulation.
