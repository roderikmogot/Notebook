// App.js
import './App.css';
import React, {Component} from 'react';
import UserInput from "./UserInput/UserInput.js";
import UserOutput from "./UserOutput/UserOutput.js";

class App extends Component {
    state = {
        username: 'StateRod'
    };

    // Use '() =>' when using 'this'
    userNameChangedHandler = (event) => {
        this.setState({

            // event targets is for the input
            // value for its value
           username: event.target.value
        });
    }

    render() {
        return (
            <div className="App">
                <UserInput changed={this.userNameChangedHandler} currentName={this.state.username}/>
                <UserOutput userName={this.state.username}/>
                <UserOutput userName={this.state.username}/>
                <UserOutput userName="Rod!"/>
            </div>
        )
    }
}

export default App;

// UserInput.js
import React from 'react';

const userInput = (props) => {
    return <input type="text" onChange={props.changed} value={props.currentName}/>
    
};

export default userInput;
  
// UserOutput.js
import React from 'react';

const userOutput = (props) => {
    return (
        <div>
            <p>Username: {props.userName}</p>
            <p>Text paragraph 2</p>
        </div>
    );

};

export default userOutput;
