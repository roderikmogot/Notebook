import './App.css';
import React, {Component} from 'react';

class App extends Component{
    render() {
    
        //jsx -> seemed-html inside js
        //className rendered to class in html
        return(
            <div className="App">
                <h1>
                    Hi, I'm React App
                </h1>
                //cant create more h1 tags
            </div>
        )
        
        //compiled jsx
                                    //{classname:'App'} -> js object, can be null
        return React.createElement('div', {classname:'App'}, React.createElement('h1',null, 'Hi, I'm React App'));
                                                                                 
        //we dont use this since it is too cumbersome

    }
}

export default App;
