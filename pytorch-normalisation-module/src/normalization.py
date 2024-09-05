import torch
import torch.nn as nn

class NormalizationModule(nn.Module):
    def __init__(self, input_size, output_size):
        super(NormalizationModule, self).__init__()
        self.linear = nn.Linear(input_size, output_size)

    def forward(self, x):
        """
        Normalize the input along each column and apply a linear layer.

        Args:
            x (torch.Tensor): Input tensor of shape (batch_size, input_size).

        Returns:
            torch.Tensor: Output tensor of shape (batch_size, output_size).
        """
        # Normalize the input along each column
        x = x - x.mean(dim=0)
        x = x / torch.sqrt((x ** 2).sum(dim=0))

        # Apply the linear layer
        out = self.linear(x)
        return out