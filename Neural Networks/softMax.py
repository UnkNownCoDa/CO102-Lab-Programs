import numpy as np #needs to be installed through pip
import nnfs#only for practice purposes needs to be installed through pip
import matplotlib.pyplot as plt #needs to be installed through pip
from nnfs.datasets import spiral_data

nnfs.init()

'''input -> exponentiate -> normalize -> output

layer_outputs = [[4.8, 1.21, 2.385],
                 [8.9, -1.81, 0.2],
                 [1.41, 1.051, 0.026]]

exp_values = np.exp(layer_outputs)

non numpy method
for output in layer_outputs:
    exp_values.append(E**output)

norm_base = sum(exp_values)

for value in exp_values:
    norm_values.append(value / norm_base)

#axis None -> default, 0 -> sum of column, 1 -> sum of row
norm_values = exp_values / np.sum(exp_values, axis=1, keepdims=True)

print(norm_values)
'''

class Layer_dense:
    def __init__(self, n_inputs, n_neurons):
        self.weights = 0.1 * np.random.randn(n_inputs, n_neurons)
        self.biases = np.zeros((1, n_neurons))
    def forward(self, inputs):
        self.output = np.dot(inputs, self.weights) + self.biases

class Activation_ReLU:
    def forward(self, inputs):
        self.output = np.maximum(0, inputs)

class Activation_SoftMax:
    def forward(self, inputs):
        exp_values = np.exp(inputs - np.max(inputs, axis = 1, keepdims=True))
        probabilities = exp_values / np.sum(exp_values, axis=1, keepdims=True)
        self.output = probabilities

X  = [[1, 2, 3, 2.5], 
      [2.0, 5.0, -1.0, 2.0],
      [-1.5, 2.7, 3.3, -0.8]]

X, y = spiral_data(100, 3)
      
dense1 = Layer_dense(2, 3)
activation1 = Activation_ReLU()
dense2 = Layer_dense(3, 3)
activation2 = Activation_SoftMax()
dense1.forward(X)
activation1.forward(dense1.output)

dense2.forward(activation1.output)
activation2.forward(dense2.output)

print(activation2.output[:5])

