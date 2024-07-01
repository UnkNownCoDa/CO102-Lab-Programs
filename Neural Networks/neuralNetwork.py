inputs = [1, 2, 3, 2.5]

weights = [[0.2, 0.8, -0.5, 1.0],
            [0.5, -0.91, 0.26, -0.5],
            [-0.26, -0.27, 0.17, 0.87]]

biases = [2, 3, 0.5]

sOutputs = []

for weight, bias in zip(weights, biases):
    noutput = 0
    for ninput, nweight in zip(inputs, weight):
        noutput += ninput * nweight
    noutput += bias
    sOutputs.append(noutput)
print([x for x in zip(weights, biases)])
print([x for x in zip(weights[0], inputs)])
print(sOutputs)
