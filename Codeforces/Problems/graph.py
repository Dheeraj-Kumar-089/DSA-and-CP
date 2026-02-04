import numpy as np
import plotly.graph_objects as go

# Parameters
t = np.linspace(0, 2*np.pi, 400)
w0 = 1
x_real = np.cos(w0*t)
x_imag = np.sin(w0*t)

fig = go.Figure()

fig.add_trace(go.Scatter(x=x_real, y=x_imag,
                         mode='lines',
                         line=dict(color='#1FB8CD', width=3),
                         showlegend=False,
                         hovertemplate='Re: %{x:.2f}<br>Im: %{y:.2f}<extra></extra>'))

fig.update_xaxes(title_text='Re', range=[-1.1, 1.1], constrain='domain', cliponaxis=False)
fig.update_yaxes(title_text='Im', range=[-1.1, 1.1], scaleanchor='x', scaleratio=1, cliponaxis=False)
fig.update_layout(title='Unit Circle of e^(j t)')

fig.write_image('unit_circle_exp.png')