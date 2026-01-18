# CSET419 - Introduction to Generative AI: Lab 1

## Overview

This lab demonstrates a workflow for implementing a simple generative algorithm for data generation and subsequent utilization of that data for model training.

The process involves two main stages:

1.  **Generative Phase**: Using a pre-trained Stable Diffusion model to generate a synthetic dataset of dog images.
2.  **Testing Phase**: Training a ResNet18 classifier on the generated synthetic data to evaluate its utility.

## Prerequisites

The following Python libraries are required:

- `diffusers`
- `transformers`
- `accelerate`
- `safetensors`
- `torch`
- `torchvision`
- `matplotlib`
- `seaborn`
- `scikit-learn`

Run the following command to install the core generative dependencies:

```bash
pip install diffusers transformers accelerate safetensors
```

## Workflow Details

### 1. Data Generation

- **Model**: `runwayml/stable-diffusion-v1-5`
- **Goal**: Generate 10 images for each of the specified dog breeds.
- **Parameters**:
    - `num_inference_steps`: 30
    - `guidance_scale`: 7.5
    - **Prompt**: "a high quality photo of a {breed}, ultra realistic, cinematic lighting, 4k, sharp focus"
- **Output**: Images are saved in the `10_dog_dataset` directory, organized by breed.

**Target Breeds:**

- Bernese Mountain Dog
- Saint Bernard
- Newfoundland
- Cane Corso
- Greyhound
- Whippet
- Chow Chow
- Shiba Inu
- Basenji
- Bloodhound
- Basset Hound

### 2. Model Training (Testing Phase)

- **Architecture**: ResNet18 (Pre-trained on ImageNet).
- **Modification**: The final fully connected layer is replaced to match the number of classes in the generated dataset.
- **Data Split**: 80% Training, 20% Validation.
- **Hyperparameters**:
    - Batch Size: 16
    - Learning Rate: 1e-4
    - Epochs: 10
    - Optimizer: Adam
    - Loss Function: CrossEntropyLoss
- **Output**: The trained model state is saved as `resnet18_10_dog_breeds.pth`.

### 3. Evaluation

- The script calculates and prints the validation accuracy after each epoch.
- A **Confusion Matrix** is generated and displayed using `seaborn` and `matplotlib` to visualize the model's performance on the validation set.
