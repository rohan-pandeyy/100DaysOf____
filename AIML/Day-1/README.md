# Day 1: Unstructured Data Preprocessing

## Overview

This lab introduces basic data preprocessing techniques for unstructured data, specifically **Text** and **Audio**. The objective is to clean, transform, and prepare each type of data for downstream machine learning tasks.

## Part 1: Text Data Preprocessing

**Objective**: Clean and standardize raw text data.

### Steps Implemented:

1.  **Loading**: Fetch text from a URL using `requests`.
2.  **Cleaning**: Remove special characters, digits, and extra spaces using Regular Expressions (`re`).
3.  **Tokenization**: Split text into individual words.
4.  **Stopword Removal**: Filter out common words (e.g., "the", "is") using `nltk`.
5.  **Stemming**: Reduce words to their root form using `PorterStemmer`.
6.  **Analysis**: Count and display the most frequent words.

## Part 2: Audio Data Preprocessing

**Objective**: Transform raw audio signals for analysis.

### Steps Implemented:

1.  **Loading**: Fetch an audio file (`.wav`) from a URL and load it using `librosa`.
2.  **Normalization**: Scale amplitude to a range of `[-1, 1]` for stability.
3.  **Visualization**: Plot the time-domain waveform using `matplotlib`.
4.  **Feature Extraction**: Compute **MFCCs (Mel Frequency Cepstral Coefficients)**, which represented the short-term power spectrum of sound.

## Libraries Used

- `numpy`: Numerical operations.
- `matplotlib`: Data visualization.
- `requests`: Data downloading.
- `nltk`: Natural Language Toolkit (Text).
- `librosa`: Audio analysis.
